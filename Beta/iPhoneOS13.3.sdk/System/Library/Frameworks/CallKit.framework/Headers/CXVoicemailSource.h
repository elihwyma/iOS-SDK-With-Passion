/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@protocol CXVoicemailProviderVendorProtocol, CXVoicemailSourceDelegate, OS_dispatch_queue;

@interface CXVoicemailSource : NSObject

{
    _Bool _connected;
    id <CXVoicemailSourceDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) id <CXVoicemailProviderVendorProtocol> vendorProtocolDelegate;
@property (nonatomic, getter=isConnected) _Bool connected;
@property (weak, nonatomic) id <CXVoicemailSourceDelegate> delegate;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *bundleIdentifier;
@property (copy, nonatomic, readonly) NSURL *bundleURL;
@property (nonatomic, readonly) int processIdentifier;
@property (nonatomic, readonly, getter=isPermittedToUsePrivateAPI) _Bool permittedToUsePrivateAPI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)bundle;
- (oneway void)actionCompleted:(id)arg1;
- (oneway void)commitTransaction:(id)arg1;
- (oneway void)handleActionTimeout:(id)arg1;
- (oneway void)registerWithConfiguration:(id)arg1;
- (oneway void)requestTransaction:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)beginWithCompletionHandler:(CDUnknownBlockType)arg1;
- (oneway void)reportNewVoicemailsWithUpdates:(id)arg1;
- (oneway void)reportVoicemailsUpdated:(id)arg1;
- (oneway void)reportVoicemailsRemovedWithUUIDs:(id)arg1;

@end
