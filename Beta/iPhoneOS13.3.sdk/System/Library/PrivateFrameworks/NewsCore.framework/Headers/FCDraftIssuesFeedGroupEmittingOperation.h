/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@class NSString;

@interface FCDraftIssuesFeedGroupEmittingOperation : FCFeedGroupEmittingOperation

{
    NSString *_issueListID;
}

@property (nonatomic, readonly) NSString *issueListID;

- (_Bool)validateOperation;
- (void)performOperation;
- (id)initWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 groupEmitterIdentifier:(id)arg4 issueListID:(id)arg5;

@end
