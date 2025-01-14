#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BushBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class NetherWartBlock : public ::BushBlock {
public:
    // prevent constructor by default
    NetherWartBlock& operator=(NetherWartBlock const&);
    NetherWartBlock(NetherWartBlock const&);
    NetherWartBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1NetherWartBlock@@UEAA@XZ
    virtual ~NetherWartBlock() = default;

    // vIndex: 5, symbol:
    // ?getCollisionShape@NetherWartBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 9, symbol:
    // ?getOutline@NetherWartBlock@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@@Z
    virtual class AABB const&
    getOutline(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 56, symbol: ?canContainLiquid@NetherWartBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 86, symbol: ?mayPlaceOn@NetherWartBlock@@MEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlaceOn(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 96, symbol: ?asItemInstance@NetherWartBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 138, symbol: ?canBeSilkTouched@NetherWartBlock@@MEBA_NXZ
    virtual bool canBeSilkTouched() const;

    // vIndex: 151, symbol: ?randomTick@NetherWartBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 156, symbol: ?canSurvive@NetherWartBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 163, symbol: ?getResourceItem@NetherWartBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
    virtual class ItemInstance getResourceItem(class Randomize&, class Block const&, int) const;

    // vIndex: 164, symbol: ?getResourceCount@NetherWartBlock@@UEBAHAEAVRandomize@@AEBVBlock@@H@Z
    virtual int getResourceCount(class Randomize& randomize, class Block const& block, int bonusLootLevel) const;

    // symbol: ??0NetherWartBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI NetherWartBlock(std::string const& nameId, int id);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?MAX_AGE@NetherWartBlock@@0HB
    MCAPI static int const MAX_AGE;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $MAX_AGE() { return MAX_AGE; }

    // NOLINTEND
};
