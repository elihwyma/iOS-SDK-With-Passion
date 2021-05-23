/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

#import <ARKit/Swift-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString, PRRangingSession;

@protocol ARSensorDelegate;

@interface ARProximitySensor : NSObject <Swift>

{
    PRRangingSession *_rangingSession;
    NSMutableSet *_peers;
    NSMutableDictionary *_vioSessionID;
    NSMutableSet *_vioSessions;
    struct os_unfair_lock_s _lockState;
    _Bool _running;
    id <ARSensorDelegate> _delegate;
}

@property (getter=isRunning) _Bool running;
@property (weak, nonatomic) id <ARSensorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) unsigned long long powerUsage;

- (id)init;
- (void)dealloc;
- (void)stop;
- (void)start;
- (void)pushCollaborationData:(id)arg1;
- (unsigned long long)providedDataTypes;
- (void)_requestInitialCollaborationData;
- (void)rangingSession:(id)arg1 didFailWithError:(id)arg2;
- (void)rangingSession:(id)arg1 didMeasurePeer:(id)arg2 atRelativePosition:(id)arg3;
- (void)rangingSession:(id)arg1 didOutputCollaborationData:(id)arg2;

@end
