/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSString, NSURL, NSURLSession;

@interface WFSlackSessionManager : NSObject

{
    NSString *_token;
    NSURLSession *_session;
    NSURL *_baseURL;
    NSMapTable *_progressTable;
}

@property (nonatomic, readonly) NSURLSession *session;
@property (nonatomic, readonly) NSURL *baseURL;
@property (retain, nonatomic) NSMapTable *progressTable;
@property (copy, nonatomic) NSString *token;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (id)initWithSessionConfiguration:(id)arg1;
- (void)sendRequest:(id)arg1 progress:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)testAuthentication:(CDUnknownBlockType)arg1;
- (void)listChannels:(CDUnknownBlockType)arg1;
- (void)listGroups:(CDUnknownBlockType)arg1;
- (void)listUsers:(CDUnknownBlockType)arg1;
- (void)listIMs:(CDUnknownBlockType)arg1;
- (void)sendMessage:(id)arg1 toChannel:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)uploadFile:(id)arg1 progress:(id)arg2 toChannel:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
