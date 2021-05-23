/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SBFUserAuthenticationResponder : NSObject

{
    CDUnknownBlockType _successHandler;
    CDUnknownBlockType _failureHandler;
    CDUnknownBlockType _invalidHandler;
}

@property (copy, nonatomic) CDUnknownBlockType successHandler;
@property (copy, nonatomic) CDUnknownBlockType failureHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)responderWithSuccessHandler:(CDUnknownBlockType)arg1 failureHandler:(CDUnknownBlockType)arg2 invalidHandler:(CDUnknownBlockType)arg3;

- (void)handleSuccessfulAuthenticationRequest:(id)arg1;
- (void)handleFailedAuthenticationRequest:(id)arg1 error:(id)arg2;
- (void)handleInvalidAuthenticationRequest:(id)arg1;
- (id)initWithSuccessHandler:(CDUnknownBlockType)arg1 failureHandler:(CDUnknownBlockType)arg2 invalidHandler:(CDUnknownBlockType)arg3;

@end
