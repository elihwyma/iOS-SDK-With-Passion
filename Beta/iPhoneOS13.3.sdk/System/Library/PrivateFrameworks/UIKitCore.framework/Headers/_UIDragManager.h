/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class CAContext, NSArray, NSMutableArray, UIScreen;

__attribute__((visibility("hidden")))
@interface _UIDragManager : NSObject

{
    CAContext *_dragImageContext;
    long long _pendingSessionRequests;
    NSMutableArray *_pendingSessionRequestsCompletionBlocks;
    NSArray *_dragSessionSources;
    NSArray *_dragSessionDestinations;
    UIScreen *_screen;
}

@property (copy, nonatomic) NSArray *dragSessionSources;
@property (copy, nonatomic) NSArray *dragSessionDestinations;
@property (nonatomic, readonly) CAContext *dragImageContext;
@property (weak, nonatomic, readonly) UIScreen *screen;

+ (void)initializeDraggingSystem;

- (id)beginDragWithSessionConfiguration:(id)arg1;
- (void)deleteSlots:(id)arg1;
- (unsigned int)uploadImage:(struct CGImage *)arg1;
- (void)sessionSourceDidEnd:(id)arg1;
- (id)sessionSourceWithIdentifier:(unsigned int)arg1;
- (void)sessionDestinationDidEnd:(id)arg1;
- (id)initWithScreen:(id)arg1;
- (void)_willAddDeactivationReason:(id)arg1;
- (void)performPendingSessionCompletionBlocksIfPossible;
- (_Bool)hasPendingSessionRequests;
- (void)performAfterCompletingPendingSessionRequests:(CDUnknownBlockType)arg1;
- (id)dragDestinationWithEvent:(id)arg1;

@end
