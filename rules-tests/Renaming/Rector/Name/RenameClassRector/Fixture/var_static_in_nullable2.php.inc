<?php

namespace Rector\Tests\Renaming\Rector\Name\RenameClassRector\Fixture;

use DateTime;
use DateTimeInterface;

class VarStaticInNullable2 extends \DateTime
{
    /**
     * @var ?static
     */
    private $dateTime;

    public function __construct(DateTime $dateTime)
    {
        $this->dateTime = rand(0,45)
            ? $dateTime
            : null;
    }
}

?>
-----
<?php

namespace Rector\Tests\Renaming\Rector\Name\RenameClassRector\Fixture;

use DateTime;
use DateTimeInterface;

class VarStaticInNullable2 extends \DateTime
{
    /**
     * @var ?static
     */
    private $dateTime;

    public function __construct(\DateTimeInterface $dateTime)
    {
        $this->dateTime = rand(0,45)
            ? $dateTime
            : null;
    }
}

?>
