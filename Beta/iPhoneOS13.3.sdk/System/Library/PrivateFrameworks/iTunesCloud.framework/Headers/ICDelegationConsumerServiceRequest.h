/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class ICRequestContext, NSDictionary;

@interface ICDelegationConsumerServiceRequest : NSObject

{
    ICRequestContext *_requestContext;
    double _timeoutInterval;
    NSDictionary *_userIdentityDelegationAccountUUIDs;
}

@property (copy, nonatomic, readonly) ICRequestContext *requestContext;
@property (nonatomic, readonly) double timeoutInterval;
@property (copy, nonatomic, readonly) NSDictionary *userIdentityDelegationAccountUUIDs;

- (id)initWithUserIdentityDelegationAccountUUIDs:(id)arg1 requestContext:(id)arg2 timeoutInterval:(double)arg3;

@end
