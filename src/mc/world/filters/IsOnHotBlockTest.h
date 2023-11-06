#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#include "mc/world/filters/SimpleBoolFilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class IsOnHotBlockTest : public ::SimpleBoolFilterTest {
public:
    // prevent constructor by default
    IsOnHotBlockTest& operator=(IsOnHotBlockTest const&);
    IsOnHotBlockTest(IsOnHotBlockTest const&);
    IsOnHotBlockTest();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~IsOnHotBlockTest();

    // vIndex: 2, symbol: ?evaluate@IsOnHotBlockTest@@UEBA_NAEBUFilterContext@@@Z
    virtual bool evaluate(struct FilterContext const&) const;

    // vIndex: 4, symbol: ?getName@IsOnHotBlockTest@@UEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getName() const;

    // NOLINTEND
};
