/*
 Image: /System/Library/PrivateFrameworks/ProactiveExperimentsInternals.framework/ProactiveExperimentsInternals
 */

#import <Foundation/NSObject.h>

@class NSString, _PASBundleIdResolver;

@protocol PREResponsesProtocol;

@interface PREResponsesServerRequestHandler : NSObject

{
    id <PREResponsesProtocol> _clientProxy;
    NSString *_clientProcessName;
    _PASBundleIdResolver *_bundleIdResolver;
}

@property (copy, nonatomic) NSString *clientProcessName;
@property (retain, nonatomic) _PASBundleIdResolver *bundleIdResolver;

- (void)setRemoteObjectProxy:(id)arg1;
- (void)preResponseItemsForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 conversationHistory:(id)arg3 forContext:(id)arg4 time:(id)arg5 language:(id)arg6 modelFilePath:(id)arg7 modelConfigPath:(id)arg8 registerDisplayed:(_Bool)arg9 completion:(CDUnknownBlockType)arg10;
- (void)registerResponse:(id)arg1 position:(id)arg2 isCanned:(_Bool)arg3 isUsingQuickResponses:(_Bool)arg4 locale:(id)arg5 modelConfigPath:(id)arg6;
- (id)preResponseItemArrayFromQuickResponses:(id)arg1;

@end
