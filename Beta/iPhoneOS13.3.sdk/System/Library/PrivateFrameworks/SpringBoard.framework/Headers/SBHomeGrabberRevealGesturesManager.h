/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSHashTable, NSString, UIScreenEdgePanGestureRecognizer, UITapGestureRecognizer;

@protocol OS_dispatch_queue;

@interface SBHomeGrabberRevealGesturesManager : NSObject <Swift>

{
    UITapGestureRecognizer *_bounceTapRecognizer;
    UITapGestureRecognizer *_revealTapRecognizer;
    UITapGestureRecognizer *_revealDoubleTapRecognizer;
    UIScreenEdgePanGestureRecognizer *_revealEdgePanRecognizer;
    NSObject<OS_dispatch_queue> *_registrationQueue;
    NSHashTable *_registeredGrabbers;
    _Bool _gestureEnabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_tapRecognized:(id)arg1;
- (void)registerGrabber:(id)arg1;
- (void)unregisterGrabber:(id)arg1;
- (void)_edgePanChanged:(id)arg1;

@end
