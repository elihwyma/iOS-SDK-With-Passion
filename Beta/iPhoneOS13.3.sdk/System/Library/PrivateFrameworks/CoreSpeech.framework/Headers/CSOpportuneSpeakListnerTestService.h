/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class CSOpportuneSpeakListener, NSString;

@protocol OS_dispatch_queue;

@interface CSOpportuneSpeakListnerTestService : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    int _notifyToken;
    CSOpportuneSpeakListener *listener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)start;
- (void)opportuneSpeakListener:(id)arg1 didStopUnexpectly:(_Bool)arg2;
- (void)opportuneSpeakListener:(id)arg1 hasRemoteVADAvailable:(_Bool)arg2;
- (void)opportuneSpeakListener:(id)arg1 hasVADAvailable:(_Bool)arg2;
- (void)receiveOpportuneSpeakListenerStart;
- (void)receiveOpportuneSpeakListenerStop;

@end
