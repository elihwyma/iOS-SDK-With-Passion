/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <UIKit/UICoverSheetButton.h>

@class _UILegibilitySettings;

@interface CSQuickActionsButton : UICoverSheetButton

{
    _Bool _permitted;
    long long _type;
    _UILegibilitySettings *_legibilitySettings;
}

@property (nonatomic) long long type;
@property (nonatomic) _Bool permitted;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;

- (id)initWithType:(long long)arg1;
- (void)_updateStyle;
- (void)setSelected:(_Bool)arg1;
- (id)_buttonImageNameForSelected:(_Bool)arg1;
- (id)_imageWithName:(id)arg1;
- (id)_accessoryTitleForType;
- (id)_statisticsIdentifierForType;

@end
