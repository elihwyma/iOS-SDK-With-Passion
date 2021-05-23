/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NEExtensionProviderContext, NSString, NWPath, NWPathEvaluator;

@interface NEProvider : NSObject

{
    NWPath *_defaultPath;
    NWPathEvaluator *_defaultPathEvaluator;
    NEExtensionProviderContext *_context;
    NSString *_appName;
}

@property (retain) NWPathEvaluator *defaultPathEvaluator;
@property (retain) NWPath *defaultPath;
@property (retain) NEExtensionProviderContext *context;
@property (retain) NSString *appName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isRunningInProvider;
+ (_Bool)isNEProviderBundle:(id)arg1 forExtensionPoint:(id)arg2;
+ (void)startSystemExtensionMode;

- (id)init;
- (void)dealloc;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)setdefaultPathObserver:(id)arg1;
- (void)observerHelperHandler:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)sleepWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)wake;
- (id)initAllowUnentitled:(_Bool)arg1;
- (id)createTCPConnectionToEndpoint:(id)arg1 enableTFO:(_Bool)arg2 initialData:(id)arg3 enableMultipath:(_Bool)arg4 enableTLS:(_Bool)arg5 TLSParameters:(id)arg6 delegate:(id)arg7 URL:(id)arg8;
- (id)createTCPConnectionToEndpoint:(id)arg1 enableTLS:(_Bool)arg2 TLSParameters:(id)arg3 delegate:(id)arg4;
- (id)createTCPConnectionToEndpoint:(id)arg1 enableTFO:(_Bool)arg2 initialData:(id)arg3 enableMultipath:(_Bool)arg4 enableTLS:(_Bool)arg5 TLSParameters:(id)arg6 delegate:(id)arg7;
- (id)createUDPSessionToEndpoint:(id)arg1 fromEndpoint:(id)arg2;
- (void)displayMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
