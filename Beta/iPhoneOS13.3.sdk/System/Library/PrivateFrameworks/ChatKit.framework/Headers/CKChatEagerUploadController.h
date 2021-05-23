/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKChatEagerUploadController : NSObject

{
    NSMutableDictionary *_identifierMap;
    NSMutableArray *_uploadUrls;
    NSMutableDictionary *_temporaryURLS;
}

@property (retain, nonatomic) NSMutableDictionary *identifierMap;
@property (retain, nonatomic) NSMutableArray *uploadUrls;
@property (retain, nonatomic) NSMutableDictionary *temporaryURLS;

- (id)init;
- (void)cancelAll;
- (void)didSendComposition;
- (void)cancelIdentifier:(id)arg1;
- (void)uploadPayload:(id)arg1 identifier:(id)arg2 replace:(_Bool)arg3;
- (void)uploadFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3 videoComplementURL:(id)arg4 attributionInfo:(id)arg5 identifier:(id)arg6;
- (void)cancelURL:(id)arg1;
- (void)removeTemporaryURLForURL:(id)arg1;
- (void)_uploadFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3 videoComplementURL:(id)arg4 attributionInfo:(id)arg5 identifier:(id)arg6;
- (id)_newTransferForURL:(id)arg1 transcoderUserInfo:(id)arg2 attributionInfo:(id)arg3;
- (void)addURLToIdentifierMap:(id)arg1 forIdentifier:(id)arg2;
- (void)asyncCopyFileAtURL:(id)arg1 toDestinationURL:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
