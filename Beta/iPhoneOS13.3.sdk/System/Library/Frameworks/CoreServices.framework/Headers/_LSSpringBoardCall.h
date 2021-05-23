/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@class BSServiceConnectionEndpoint, NSDictionary, NSString, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface _LSSpringBoardCall : NSObject

{
    NSString *_schemeIfNotFileURL;
    _Bool _callCompletionHandlerWhenFullyComplete;
    NSDictionary *_launchOptions;
    BSServiceConnectionEndpoint *_targetServiceConnectionEndpoint;
    NSString *_applicationIdentifier;
    NSXPCConnection *_clientXPCConnection;
}

@property (copy) NSString *applicationIdentifier;
@property (copy) NSDictionary *launchOptions;
@property (retain) NSXPCConnection *clientXPCConnection;
@property _Bool callCompletionHandlerWhenFullyComplete;
@property (retain) BSServiceConnectionEndpoint *targetServiceConnectionEndpoint;

+ (id)springBoardQueue;
+ (id)springBoardDeadlockPreventionQueue;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)callWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)callSpringBoardWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)promptAndCallSpringBoardWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)lieWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
