/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TRCompletionOperationHandler : NSObject

{
    CDUnknownBlockType _completionHandler;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)registerMessageHandlersForSession:(id)arg1;
- (void)_handleCompletionRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;

@end
