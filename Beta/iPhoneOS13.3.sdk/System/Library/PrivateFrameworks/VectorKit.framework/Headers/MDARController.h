/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class ARPositionalTrackingConfiguration, ARSession, NSString;

@protocol MDARControllerDelegate;

__attribute__((visibility("hidden")))
@interface MDARController : NSObject

{
    unsigned long long _trackingState;
    unsigned long long _trackingStateReason;
    unsigned long long _sessionInterruptedReason;
    ARSession *_session;
    ARPositionalTrackingConfiguration *_sessionConfiguration;
    id <MDARControllerDelegate> _delegate;
}

@property (nonatomic) id <MDARControllerDelegate> delegate;
@property (nonatomic, readonly) ARSession *session;
@property (nonatomic, readonly) unsigned long long sessionInterruptedReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isSupported;
+ (unsigned long long)vkARTrackingStateFromARTrackingState:(long long)arg1;
+ (unsigned long long)vkARTrackingStateReasonFromARTrackingStateReason:(long long)arg1;

- (id)init;
- (void)dealloc;
- (void)pause;
- (void)run:(_Bool)arg1;
- (void)_avCaptureSessionWasInterrupted:(id)arg1;
- (void)session:(id)arg1 didFailWithError:(id)arg2;
- (void)session:(id)arg1 cameraDidChangeTrackingState:(id)arg2;
- (void)sessionWasInterrupted:(id)arg1;
- (void)sessionInterruptionEnded:(id)arg1;

@end
