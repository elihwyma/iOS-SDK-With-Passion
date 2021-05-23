/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIActionSheetiOSDismissActionView, UIColor;

__attribute__((visibility("hidden")))
@interface _UIActionSheetPresentationControllerVisualStyleiOS : NSObject

{
    UIActionSheetiOSDismissActionView *_dismissActionView;
}

@property (retain, nonatomic) UIActionSheetiOSDismissActionView *dismissActionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) double dismissToContentSpacing;
@property (readonly) UIColor *dimmingViewColor;
@property (readonly) double cornerRadius;

- (id)init;
- (struct UIEdgeInsets)contentInsetsForContainerView:(id)arg1;

@end
