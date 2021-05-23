/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIButton.h>

__attribute__((visibility("hidden")))
@interface _UITableCellAccessoryButton : UIButton

{
    CDUnknownBlockType _backgroundImageProvider;
}

@property (copy, nonatomic) CDUnknownBlockType backgroundImageProvider;

- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)initWithFrame:(struct CGRect)arg1 backgroundImageProvider:(CDUnknownBlockType)arg2;

@end
