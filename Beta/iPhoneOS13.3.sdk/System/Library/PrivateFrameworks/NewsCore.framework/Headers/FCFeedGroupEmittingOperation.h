/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class FCFeedGroup, FCFeedGroupEmittingContext, FCFeedGroupEmittingCursor, NSArray, NSString;

@interface FCFeedGroupEmittingOperation : FCOperation

{
    _Bool _resultFinished;
    CDUnknownBlockType _groupEmittingCompletionHandler;
    FCFeedGroupEmittingContext *_context;
    FCFeedGroupEmittingCursor *_fromCursor;
    FCFeedGroupEmittingCursor *_toCursor;
    NSString *_groupEmitterIdentifier;
    FCFeedGroup *_resultGroup;
    NSArray *_resultGroups;
    FCFeedGroupEmittingCursor *_resultCursor;
}

@property (copy, nonatomic) CDUnknownBlockType groupEmittingCompletionHandler;
@property (nonatomic, readonly) FCFeedGroupEmittingContext *context;
@property (nonatomic, readonly) FCFeedGroupEmittingCursor *fromCursor;
@property (nonatomic, readonly) FCFeedGroupEmittingCursor *toCursor;
@property (copy, nonatomic, readonly) NSString *groupEmitterIdentifier;
@property (retain, nonatomic) FCFeedGroup *resultGroup;
@property (retain, nonatomic) NSArray *resultGroups;
@property (retain, nonatomic) FCFeedGroupEmittingCursor *resultCursor;
@property (nonatomic) _Bool resultFinished;

- (void)operationWillFinishWithError:(id)arg1;
- (id)initWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 groupEmitterIdentifier:(id)arg4;

@end
