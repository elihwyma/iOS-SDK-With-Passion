/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSArray, NSUUID;

@interface _HDObjectAuthorizationRequest : NSObject

{
    NSUUID *_identifier;
    NSArray *_samples;
    NSArray *_authorizationRecords;
    CDUnknownBlockType _completion;
}

@property (copy, nonatomic) CDUnknownBlockType completion;
@property (nonatomic, readonly) NSUUID *identifier;
@property (copy, nonatomic, readonly) NSArray *samples;
@property (copy, nonatomic, readonly) NSArray *samplesRequiringAuthorization;
@property (retain, nonatomic) NSArray *authorizationRecords;

- (id)initForSamples:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)invokeCompletionWithSuccess:(_Bool)arg1 sourceEntity:(id)arg2 profile:(id)arg3 error:(id)arg4;
- (void)invokeCompletionHandlerWithAuthorizedSamples:(id)arg1 error:(id)arg2;

@end
