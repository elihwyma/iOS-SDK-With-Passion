/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class CALayer, NSString;

@interface PKDelayedAnimationTracker : NSObject

{
    CALayer *_layer;
    NSString *_key;
    CDUnknownBlockType _removalAction;
}

@property (weak, nonatomic, readonly) CALayer *layer;
@property (copy, nonatomic, readonly) NSString *key;
@property (copy, nonatomic) CDUnknownBlockType removalAction;

- (id)init;
- (id)initWithLayer:(id)arg1 key:(id)arg2;
- (void)removeAnimationIfPossible;

@end
