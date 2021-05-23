/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol AVTAvatarAttributeEditorLayout;

@interface AVTAvatarAttributeEditorOverridingLayout : NSObject

{
    double _avatarContainerAlpha;
    id <AVTAvatarAttributeEditorLayout> _backingLayout;
    struct CGRect _avatarContainerFrame;
    struct CGRect _attributesContentViewFrame;
}

@property (nonatomic, readonly) id <AVTAvatarAttributeEditorLayout> backingLayout;
@property (nonatomic) struct CGRect avatarContainerFrame;
@property (nonatomic) double avatarContainerAlpha;
@property (nonatomic) struct CGRect attributesContentViewFrame;
@property (nonatomic, readonly) struct CGSize containerSize;
@property (nonatomic, readonly) struct UIEdgeInsets edgeInsets;
@property (nonatomic, readonly) double screenScale;
@property (copy, nonatomic, readonly) NSString *contentSizeCategory;
@property (nonatomic, readonly) struct CGRect groupDialContainerFrame;
@property (nonatomic, readonly) struct CGRect userInfoFrame;
@property (nonatomic, readonly) double headerMaskingViewAlpha;
@property (nonatomic, readonly) struct CGRect headerMaskingViewFrame;
@property (nonatomic, readonly) double verticalRuleAlpha;
@property (nonatomic, readonly) struct CGRect verticalRuleFrame;
@property (nonatomic, readonly) struct UIEdgeInsets attributesContentViewInsets;
@property (nonatomic, readonly) struct UIEdgeInsets attributesContentViewScrollIndicatorInsets;
@property (nonatomic, readonly) unsigned long long supportedLayoutOrientation;

- (id)initWithLayout:(id)arg1;

@end
