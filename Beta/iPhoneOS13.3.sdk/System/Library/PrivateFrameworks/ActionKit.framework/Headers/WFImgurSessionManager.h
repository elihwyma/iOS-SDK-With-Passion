/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSString, NSURL, NSURLSession, WFOAuth2Credential;

@interface WFImgurSessionManager : NSObject

{
    NSString *_clientID;
    WFOAuth2Credential *_credential;
    NSURLSession *_session;
    NSURL *_baseURL;
    NSMapTable *_progressTable;
}

@property (nonatomic, readonly) NSURLSession *session;
@property (nonatomic, readonly) NSURL *baseURL;
@property (nonatomic, readonly) NSMapTable *progressTable;
@property (copy, nonatomic, readonly) NSString *clientID;
@property (copy, nonatomic) WFOAuth2Credential *credential;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (id)initWithClientID:(id)arg1;
- (id)initWithClientID:(id)arg1 configuration:(id)arg2;
- (void)uploadImage:(id)arg1 title:(id)arg2 description:(id)arg3 progress:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)createAlbumWithIDs:(id)arg1 title:(id)arg2 description:(id)arg3 layout:(id)arg4 privacy:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)getAlbumLinkFromID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)sendRequest:(id)arg1 progress:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
