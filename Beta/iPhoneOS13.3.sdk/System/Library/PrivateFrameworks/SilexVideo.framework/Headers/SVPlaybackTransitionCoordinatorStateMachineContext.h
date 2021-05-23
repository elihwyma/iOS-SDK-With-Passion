/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

#import <SilexVideo/Swift-Protocol.h>

@class NSString;

@protocol SVPlaybackTransitionContext;

@interface SVPlaybackTransitionCoordinatorStateMachineContext : NSObject <Swift>

{
    id <SVPlaybackTransitionContext> _context;
}

@property (nonatomic, readonly) id <SVPlaybackTransitionContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithTransitionContext:(id)arg1;

@end
