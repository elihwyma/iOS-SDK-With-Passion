/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <BaseBoard/BSAction.h>

@class _UIBannerContent;

@interface UIBannerAction : BSAction

@property (nonatomic, readonly) _UIBannerContent *bannerContent;
@property (nonatomic, readonly) _Bool tappable;

- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (long long)UIActionType;
- (id)_initWithBannerContent:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (id)initWithBannerContent:(id)arg1;
- (id)initWithBannerContent:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (_Bool)bannerTapped;

@end
