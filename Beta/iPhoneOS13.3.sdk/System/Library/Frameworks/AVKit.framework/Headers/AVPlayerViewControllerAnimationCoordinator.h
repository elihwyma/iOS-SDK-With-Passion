/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface AVPlayerViewControllerAnimationCoordinator : NSObject

{
    NSMutableArray *_animations;
    NSMutableArray *_completions;
}

@property (nonatomic, readonly) NSMutableArray *animations;
@property (nonatomic, readonly) NSMutableArray *completions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)addCoordinatedAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performCoordinatedAnimations;
- (void)didFinishAnimations:(_Bool)arg1;

@end
