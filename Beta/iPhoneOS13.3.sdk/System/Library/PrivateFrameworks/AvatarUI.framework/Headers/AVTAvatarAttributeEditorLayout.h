/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AVTAvatarAttributeEditorLayout : NSObject

{
    double _screenScale;
    NSString *_contentSizeCategory;
    struct CGSize _containerSize;
    struct UIEdgeInsets _edgeInsets;
}

@property (nonatomic, readonly) struct CGSize containerSize;
@property (nonatomic, readonly) struct UIEdgeInsets edgeInsets;
@property (nonatomic, readonly) double screenScale;
@property (copy, nonatomic, readonly) NSString *contentSizeCategory;
@property (nonatomic, readonly) struct CGRect avatarContainerFrame;
@property (nonatomic, readonly) double avatarContainerAlpha;
@property (nonatomic, readonly) struct CGRect groupDialContainerFrame;
@property (nonatomic, readonly) struct CGRect attributesContentViewFrame;
@property (nonatomic, readonly) struct CGRect userInfoFrame;
@property (nonatomic, readonly) double headerMaskingViewAlpha;
@property (nonatomic, readonly) struct CGRect headerMaskingViewFrame;
@property (nonatomic, readonly) double verticalRuleAlpha;
@property (nonatomic, readonly) struct CGRect verticalRuleFrame;
@property (nonatomic, readonly) struct UIEdgeInsets attributesContentViewInsets;
@property (nonatomic, readonly) struct UIEdgeInsets attributesContentViewScrollIndicatorInsets;
@property (nonatomic, readonly) unsigned long long supportedLayoutOrientation;

- (id)backgroundColor;
- (id)initWithContainerSize:(struct CGSize)arg1 insets:(struct UIEdgeInsets)arg2 screenScale:(double)arg3;
- (void)raiseExceptionForPropertyString:(id)arg1;

@end
