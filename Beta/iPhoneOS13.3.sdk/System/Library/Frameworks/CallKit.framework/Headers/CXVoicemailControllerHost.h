/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString, NSXPCListener;

@protocol CXVoicemailControllerHostDelegate, OS_dispatch_queue;

@interface CXVoicemailControllerHost : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    id <CXVoicemailControllerHostDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSXPCListener *_xpcListener;
    NSMutableDictionary *_voicemailUUIDToVoicemailMap;
    NSMutableSet *_connections;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id <CXVoicemailControllerHostDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) NSXPCListener *xpcListener;
@property (retain, nonatomic) NSMutableDictionary *voicemailUUIDToVoicemailMap;
@property (retain, nonatomic) NSMutableSet *connections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_performDelegateCallback:(CDUnknownBlockType)arg1;
- (void)addOrUpdateVoicemails:(id)arg1;
- (void)removeVoicemails:(id)arg1;
- (void)voicemailControllerHostConnectionInvalidated:(id)arg1;
- (void)voicemailControllerHostConnection:(id)arg1 requestVoicemails:(CDUnknownBlockType)arg2;
- (void)voicemailControllerHostConnection:(id)arg1 requestTransaction:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_voicemailsForVoicemailControllerHostConnection:(id)arg1;
- (id)initWithVoicemails:(id)arg1 delegate:(id)arg2 queue:(id)arg3;

@end
