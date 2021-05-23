/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIButton.h>

@class NSString;

@interface CAMMessagesPhotosButton : UIButton

{
    long long _orientation;
    struct UIEdgeInsets _tappableEdgeInsets;
}

@property (nonatomic) struct UIEdgeInsets tappableEdgeInsets;
@property (nonatomic) long long orientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)photosButton;

- (void)layoutSubviews;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;
- (id)imageForAccessibilityHUD;

@end
