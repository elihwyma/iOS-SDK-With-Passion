/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString, NSURL, NSURLSession;

@interface WFWordPressSessionManager : NSObject

{
    NSString *_username;
    NSString *_password;
    NSURL *_endpointURL;
    NSNumber *_blogId;
    NSURLSession *_session;
}

@property (nonatomic, readonly) NSURLSession *session;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) NSURL *endpointURL;
@property (copy, nonatomic) NSNumber *blogId;

- (id)init;
- (void)sendRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithSessionConfiguration:(id)arg1;
- (void)getBlogsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getTermsForTaxonomy:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getPostTypesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getPostFormatsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getPostStatusesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getPageTemplatesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)createPostWithTitle:(id)arg1 content:(id)arg2 type:(id)arg3 date:(id)arg4 format:(id)arg5 status:(id)arg6 allowingComments:(_Bool)arg7 name:(id)arg8 excerpt:(id)arg9 template:(id)arg10 tags:(id)arg11 categories:(id)arg12 thumbnailId:(id)arg13 customFields:(id)arg14 completionHandler:(CDUnknownBlockType)arg15;
- (void)createPostWithContent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getPost:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)uploadFile:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)sendRequestWithMethod:(id)arg1 parameters:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
