/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSDateFormatter, NSString, NSURL, NSURLSession;

@interface WFPinboardSessionManager : NSObject

{
    NSURLSession *_session;
    NSString *_username;
    NSString *_password;
    NSString *_apiToken;
    NSURL *_baseURL;
    NSDateFormatter *_dateTimeFormatter;
}

@property (nonatomic, readonly) NSURL *baseURL;
@property (nonatomic, readonly) NSDateFormatter *dateTimeFormatter;
@property (nonatomic, readonly) NSURLSession *session;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) NSString *apiToken;

- (id)init;
- (id)initWithSession:(id)arg1;
- (id)initWithSessionConfiguration:(id)arg1;
- (void)addBookmark:(id)arg1 withTitle:(id)arg2 parameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getBookmarksWithTags:(id)arg1 limit:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getModifiedDateWithCompletion:(CDUnknownBlockType)arg1;
- (id)authenticatedTaskWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
