/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class AFSiriRequest, NSString, NSXPCListenerEndpoint;

@interface AFSiriTask : NSObject <Swift>

{
    AFSiriRequest *_request;
    NSXPCListenerEndpoint *_remoteResponseListenerEndpoint;
    NSXPCListenerEndpoint *_usageResultListenerEndpoint;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)failWithError:(id)arg1;
- (id)request;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)_initWithRequest:(id)arg1 remoteResponseListenerEndpoint:(id)arg2 usageResultListenerEndpoint:(id)arg3;
- (id)_responseHandlerConnection;
- (void)_invalidateConectionAfterMessageSent:(id)arg1;
- (id)_usageResultHandlerConnection;
- (void)completeWithResponse:(id)arg1;
- (void)reportUsageResult:(id)arg1;

@end
