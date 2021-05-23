/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSXPCConnection;

@interface ICSceneClassificationsHandler : NSObject

{
    NSXPCConnection *_xpcConnection;
    NSDictionary *_cachedRequestContextDictionary;
}

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) NSDictionary *cachedRequestContextDictionary;

+ (id)sharedHandler;

- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)searchResultNodesForSceneClassifications:(id)arg1 error:(id *)arg2;
- (void)cancelOperationsWithIdentifiers:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)requestContextDictionary;
- (id)requestContextDictionaryWithOperationId:(_Bool)arg1;
- (void)setupXpcConnection;
- (void)configureXPCConnection;

@end
