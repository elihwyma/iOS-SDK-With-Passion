/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <Foundation/NSObject.h>

@interface TRConnection : NSObject

{
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _eventMessageHandler;
    CDUnknownBlockType _requestMessageHandler;
}

@property (copy, nonatomic) CDUnknownBlockType interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) CDUnknownBlockType eventMessageHandler;
@property (copy, nonatomic) CDUnknownBlockType requestMessageHandler;

- (void)invalidate;
- (void)sendResponse:(id)arg1;
- (void)sendEvent:(id)arg1;
- (void)sendRequest:(id)arg1;

@end
