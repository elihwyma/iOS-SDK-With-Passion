/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSDateFormatter, NSString, NSURL, NSURLSession;

@interface WFTrelloSessionManager : NSObject

{
    NSDateFormatter *_dateFormatter;
    NSString *_token;
    NSURL *_baseURL;
    NSURLSession *_session;
}

@property (nonatomic, readonly) NSDateFormatter *dateFormatter;
@property (nonatomic, readonly) NSURL *baseURL;
@property (nonatomic, readonly) NSURLSession *session;
@property (copy, nonatomic) NSString *token;

- (id)init;
- (id)initWithConfiguration:(id)arg1 token:(id)arg2;
- (void)getOpenBoardsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getListsForBoard:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getCardsForList:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getUserWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)createBoardWithName:(id)arg1 boardDescription:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)createListWithName:(id)arg1 onBoardWithIdentifier:(id)arg2 position:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)createCardWithName:(id)arg1 listIdentifier:(id)arg2 dueDate:(id)arg3 cardPosition:(id)arg4 cardDescription:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)uploadFile:(id)arg1 onCard:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getAttachmentsOnCard:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)lookupCardWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestPath:(id)arg1 parameters:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
