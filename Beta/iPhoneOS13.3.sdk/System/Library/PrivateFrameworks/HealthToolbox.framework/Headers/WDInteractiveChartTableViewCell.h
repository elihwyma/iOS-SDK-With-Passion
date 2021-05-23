/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthUI/HKViewTableViewCell.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WDInteractiveChartTableViewCell : HKViewTableViewCell

{
    unsigned long long _displayMode;
    unsigned long long _marginMode;
}

@property (nonatomic) unsigned long long displayMode;
@property (nonatomic) unsigned long long marginMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultReuseIdentifier;

- (void)setTimeScope:(long long)arg1;
- (void)setPrimaryValueSource:(id)arg1 secondaryValueSource:(id)arg2 chartSource:(id)arg3;

@end
