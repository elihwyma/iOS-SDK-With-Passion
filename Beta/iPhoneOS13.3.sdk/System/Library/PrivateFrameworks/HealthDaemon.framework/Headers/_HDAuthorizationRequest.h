/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSSet, NSUUID;

@interface _HDAuthorizationRequest : NSObject

{
    CDUnknownBlockType _completionHandler;
    NSUUID *_identifier;
    NSSet *_typesToWrite;
    NSSet *_typesToRead;
}

@property (nonatomic, readonly) NSUUID *identifier;
@property (copy, nonatomic, readonly) NSSet *typesToWrite;
@property (copy, nonatomic, readonly) NSSet *typesToRead;

- (id)description;
- (id)initWithIdentifier:(id)arg1 typesToWrite:(id)arg2 typesToRead:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)invokeCompletionHandlerWithSuccess:(_Bool)arg1 error:(id)arg2;

@end
