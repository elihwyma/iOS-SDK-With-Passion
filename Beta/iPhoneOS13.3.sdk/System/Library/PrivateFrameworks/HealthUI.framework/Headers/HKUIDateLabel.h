/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UILabel.h>

@class HKValueRange;

@interface HKUIDateLabel : UILabel

{
    _Bool _useUppercase;
    HKValueRange *_dateRange;
}

@property (nonatomic, readonly) HKValueRange *dateRange;
@property (nonatomic) _Bool useUppercase;

+ (id)dateStringForDateRange:(id)arg1 formatTemplate:(long long)arg2 useUppercase:(_Bool)arg3;
+ (id)_formattedTextFromDate:(id)arg1 formatTemplate:(long long)arg2 useUppercase:(_Bool)arg3;

- (id)init;
- (void)setDateRange:(id)arg1 formatTemplate:(long long)arg2;
- (_Bool)_setDateRange:(id)arg1;
- (void)setDate:(id)arg1 formatTemplate:(long long)arg2;

@end
