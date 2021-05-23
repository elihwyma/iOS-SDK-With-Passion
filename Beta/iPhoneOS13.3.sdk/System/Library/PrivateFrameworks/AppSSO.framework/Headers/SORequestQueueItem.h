/*
 Image: /System/Library/PrivateFrameworks/AppSSO.framework/AppSSO
 */

#import <Foundation/NSObject.h>

@class SOAuthorizationRequestParameters;

@protocol SOServiceProtocol;

@interface SORequestQueueItem : NSObject

{
    id <SOServiceProtocol> _service;
    SOAuthorizationRequestParameters *_requestParameters;
    CDUnknownBlockType _completionBlock;
}

@property (nonatomic, readonly) id <SOServiceProtocol> service;
@property (nonatomic, readonly) SOAuthorizationRequestParameters *requestParameters;
@property (copy, nonatomic, readonly) CDUnknownBlockType completionBlock;

- (id)description;
- (id)initWithService:(id)arg1 requestParameters:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end
