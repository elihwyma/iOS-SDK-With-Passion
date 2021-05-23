/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface SKUIPhysicalCirclesAnimationRequest : NSObject <Swift>

{
    long long _animationType;
    CDUnknownBlockType _completionBlock;
}

@property (nonatomic) long long animationType;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finishAnimation;
- (void)_setCompletionBlock:(CDUnknownBlockType)arg1;

@end
