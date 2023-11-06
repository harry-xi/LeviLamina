#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#include "mc/world/filters/SimpleFloatFilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class FilterTestClock : public ::SimpleFloatFilterTest {
public:
    // prevent constructor by default
    FilterTestClock& operator=(FilterTestClock const&);
    FilterTestClock(FilterTestClock const&);
    FilterTestClock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1FilterTestClock@@UEAA@XZ
    virtual ~FilterTestClock();

    // vIndex: 2, symbol: ?evaluate@FilterTestClock@@UEBA_NAEBUFilterContext@@@Z
    virtual bool evaluate(struct FilterContext const&) const;

    // vIndex: 4, symbol: ?getName@FilterTestClock@@UEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getName() const;

    // NOLINTEND
};
