/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@protocol OS_xpc_object;

@interface AFSiriAceRequest : NSObject

{
    NSObject<OS_xpc_object> *_startRequestData;
    unsigned long long _requestOptions;
}

- (void)performRequestWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithStartRequest:(id)arg1 requestOptions:(unsigned long long)arg2;
- (id)initWithStartRequest:(id)arg1;

@end
