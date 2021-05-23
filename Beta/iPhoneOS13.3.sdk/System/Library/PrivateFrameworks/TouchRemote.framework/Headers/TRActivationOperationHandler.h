/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TRActivationOperationHandler : NSObject

{
    CDUnknownBlockType _activationHandler;
}

@property (copy, nonatomic) CDUnknownBlockType activationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithActivationHandler:(CDUnknownBlockType)arg1;
- (void)registerMessageHandlersForSession:(id)arg1;
- (void)_handleActivationRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;

@end
