/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIImageView.h>

@class NSLayoutConstraint, NSString, UIInterfaceAction;

__attribute__((visibility("hidden")))
@interface _UIInterfaceActionImagePropertyView : UIImageView

{
    NSLayoutConstraint *_imageWidthConstraint;
    NSLayoutConstraint *_imageHeightConstraint;
    UIInterfaceAction *_action;
    NSString *_imageProperty;
}

@property (nonatomic, readonly) UIInterfaceAction *action;
@property (nonatomic, readonly) NSString *imageProperty;
@property (nonatomic, readonly) _Bool isUsedToOccupySpaceIfNoImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)setImage:(id)arg1;
- (void)interfaceAction:(id)arg1 reloadDisplayedContentVisualStyle:(id)arg2;
- (void)interfaceAction:(id)arg1 reloadDisplayedContentActionProperties:(id)arg2;
- (id)_visualStyle;
- (void)_applyVisualStyle;
- (void)_reloadImageContent;
- (struct CGSize)_sizeToOccupy;
- (void)tintColorDidChange;
- (void)_applyVisualStyleToImageView;
- (id)_interfaceActionViewState;
- (id)initWithAction:(id)arg1 imageProperty:(id)arg2;

@end
