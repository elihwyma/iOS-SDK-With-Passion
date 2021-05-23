/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

#import <ActionKit/Swift-Protocol.h>

@class NSMapTable, NSString, NSURL, NSURLSession, WFOAuth2Credential;

@interface WFDropboxSessionManager : NSObject <Swift>

{
    WFOAuth2Credential *_credential;
    NSURL *_baseURL;
    NSURL *_contentBaseURL;
    NSURLSession *_session;
    NSMapTable *_progressTable;
}

@property (nonatomic, readonly) NSURL *baseURL;
@property (nonatomic, readonly) NSURL *contentBaseURL;
@property (nonatomic, readonly) NSURLSession *session;
@property (nonatomic, readonly) NSMapTable *progressTable;
@property (copy, nonatomic) WFOAuth2Credential *credential;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (id)initWithSessionConfiguration:(id)arg1;
- (void)deleteItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)createFolderAtPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)searchFiles:(id)arg1 inPath:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getItemAtPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getContentsOfFolderAtPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getContentsOfFolderWithParameters:(id)arg1 previous:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)saveFile:(id)arg1 toPath:(id)arg2 overwrite:(_Bool)arg3 progress:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)getSharedLinkForFile:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getExistingSharedLinkForFile:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)downloadFile:(id)arg1 ofType:(id)arg2 proposedFilename:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)sendContentDownloadRequestWithPath:(id)arg1 ofType:(id)arg2 proposedFilename:(id)arg3 parameters:(id)arg4 progress:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)sendContentUploadRequestWithPath:(id)arg1 parameters:(id)arg2 data:(id)arg3 inputStream:(id)arg4 progress:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)sendRPCRequestWithPath:(id)arg1 parameters:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
