/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@protocol NRTermsAcknowledgementRegistry;

@interface NRTermsAcknowledgementRegistry : NSObject

{
    id <NRTermsAcknowledgementRegistry> _proxy;
}

@property (nonatomic, readonly) NSXPCConnection *connection;
@property (nonatomic, readonly) id <NRTermsAcknowledgementRegistry> proxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)errorWithEnum:(unsigned long long)arg1;
+ (id)errorStringWithEnum:(unsigned long long)arg1;

- (id)proxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)add:(id)arg1 forDeviceID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)checkForAcknowledgement:(id)arg1 forDeviceID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;

@end
