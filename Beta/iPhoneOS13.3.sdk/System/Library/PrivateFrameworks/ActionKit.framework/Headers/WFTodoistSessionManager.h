/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, NSURLSession, WFOAuth2Credential;

@interface WFTodoistSessionManager : NSObject

{
    NSURLSession *_session;
    WFOAuth2Credential *_credential;
    NSURL *_baseURL;
    NSString *_syncToken;
}

@property (copy, nonatomic, readonly) NSURL *baseURL;
@property (copy, nonatomic) NSString *syncToken;
@property (nonatomic, readonly) NSURLSession *session;
@property (copy, nonatomic) WFOAuth2Credential *credential;

+ (id)dateFormatter;

- (id)init;
- (id)initWithSessionConfiguration:(id)arg1;
- (void)getProjectsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)createFileOnItemWithId:(long long)arg1 withFile:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)createItemInProject:(id)arg1 content:(id)arg2 dueDateString:(id)arg3 reminderDateString:(id)arg4 reminderService:(long long)arg5 priority:(long long)arg6 note:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)requestWithCommands:(id)arg1 resourceTypes:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
