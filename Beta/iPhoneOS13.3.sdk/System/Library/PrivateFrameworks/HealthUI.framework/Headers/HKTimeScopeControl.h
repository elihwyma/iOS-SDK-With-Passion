/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIControl.h>

@class NSArray;

@interface HKTimeScopeControl : UIControl

{
    NSArray *_timeScopes;
    _Bool _shortTextStyle;
    long long _selectedTimeScope;
}

@property (nonatomic) long long selectedTimeScope;

+ (id)controlWithFrame:(struct CGRect)arg1 style:(long long)arg2 timeScopes:(id)arg3 shortTextStyle:(_Bool)arg4;

- (id)initWithFrame:(struct CGRect)arg1 timeScopes:(id)arg2 shortTextStyle:(_Bool)arg3;
- (long long)_timeScopeForIndex:(long long)arg1;
- (long long)_indexForTimeScope:(long long)arg1;

@end
