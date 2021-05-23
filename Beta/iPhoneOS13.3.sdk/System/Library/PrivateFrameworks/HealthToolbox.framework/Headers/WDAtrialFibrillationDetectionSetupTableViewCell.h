/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <UIKit/UITableViewCell.h>

@class WDAtrialFibrillationDetectionSetupView;

__attribute__((visibility("hidden")))
@interface WDAtrialFibrillationDetectionSetupTableViewCell : UITableViewCell

{
    WDAtrialFibrillationDetectionSetupView *_setupView;
}

@property (nonatomic, readonly) WDAtrialFibrillationDetectionSetupView *setupView;

+ (id)defaultReuseIdentifier;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_setUpConstraints;

@end
