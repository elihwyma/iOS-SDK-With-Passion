/*
 Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

#import <Foundation/NSObject.h>

#import <ATFoundation/Swift-Protocol.h>

@class NSString;

@interface ATProvisioningHandler : NSObject <Swift>

{
    int _endpointType;
    NSString *_expectedRequestCommand;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)messageLinkWasOpened:(id)arg1;
- (void)messageLink:(id)arg1 didReceiveRequest:(id)arg2;
- (id)initAsEndpointType:(int)arg1;
- (void)_processProvisioningRequest:(id)arg1 withParams:(id)arg2 onMessageLink:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)_processProvisioningResponse:(id)arg1 withParams:(id)arg2 onMessageLink:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (id)_paramsForRequest:(id)arg1;
- (void)_sendProvisioningRequest:(id)arg1 OnMessageLink:(id)arg2;
- (void)_processProvisioningResponse:(id)arg1 toCommand:(id)arg2 onMessageLink:(id)arg3;

@end
