/*
 Image: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@protocol OS_dispatch_queue;

@interface PBServerConnection : NSObject

{
    NSObject<OS_dispatch_queue> *_memberQueue;
    NSXPCConnection *_memberQ_serverConnection;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue;
@property (retain, nonatomic) NSXPCConnection *memberQ_serverConnection;
@property (nonatomic, readonly) NSXPCConnection *serverConnection;

+ (id)defaultConnection;
+ (unsigned long long)beginListeningToPasteboardChangeNotifications;

- (id)init;
- (unsigned long long)deletePersistentPasteboardWithName:(id)arg1 error:(id *)arg2;
- (unsigned long long)savePasteboard:(id)arg1 dataProviderEndpoint:(id)arg2 error:(id *)arg3;
- (id)pasteboardWithName:(id)arg1 error:(id *)arg2;
- (id)localGeneralPasteboard:(id *)arg1;
- (void)helloCompletionBlock:(CDUnknownBlockType)arg1;
- (void)pasteboardWithName:(id)arg1 createIfNeeded:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)localGeneralPasteboardCompletionBlock:(CDUnknownBlockType)arg1;
- (void)savePasteboard:(id)arg1 dataProviderEndpoint:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)requestItemFromPasteboardWithName:(id)arg1 UUID:(id)arg2 itemIndex:(unsigned long long)arg3 typeIdentifier:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)deletePersistentPasteboardWithName:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)performJanitorialTasksCompletionBlock:(CDUnknownBlockType)arg1;
- (void)getAllPasteboardsCompletionBlock:(CDUnknownBlockType)arg1;
- (id)pasteboardWithName:(id)arg1 createIfNeeded:(_Bool)arg2 error:(id *)arg3;
- (void)pasteboardWithName:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)didPastePasteboard:(id)arg1;

@end
