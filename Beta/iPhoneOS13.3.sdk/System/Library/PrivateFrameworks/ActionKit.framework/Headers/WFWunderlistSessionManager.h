/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, NSURLSession, WFOAuth2Credential;

@interface WFWunderlistSessionManager : NSObject

{
    NSURLSession *_session;
    WFOAuth2Credential *_credential;
    NSString *_clientId;
    NSURL *_baseURL;
}

@property (nonatomic, readonly) NSURL *baseURL;
@property (nonatomic, readonly) NSURLSession *session;
@property (copy, nonatomic) WFOAuth2Credential *credential;
@property (copy, nonatomic) NSString *clientId;

- (id)init;
- (id)initWithSession:(id)arg1;
- (id)initWithSessionConfiguration:(id)arg1;
- (void)requestPath:(id)arg1 parameters:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getListsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)createTaskOnList:(id)arg1 title:(id)arg2 dueDate:(id)arg3 starred:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)createNoteOnTask:(id)arg1 withContent:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)createReminderOnTask:(id)arg1 withDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)createFileOnTask:(id)arg1 withFile:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)requestPath:(id)arg1 method:(id)arg2 parameters:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
