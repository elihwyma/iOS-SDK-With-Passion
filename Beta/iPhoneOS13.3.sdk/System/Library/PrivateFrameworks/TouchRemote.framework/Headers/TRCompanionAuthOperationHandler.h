/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TRCompanionAuthOperationHandler : NSObject

{
    CDUnknownBlockType _companionAuthHandler;
}

@property (copy, nonatomic) CDUnknownBlockType companionAuthHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)registerMessageHandlersForSession:(id)arg1;
- (void)_handleCompanionAuthenticationRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (id)initWithCompanionAuthHandler:(CDUnknownBlockType)arg1;

@end
