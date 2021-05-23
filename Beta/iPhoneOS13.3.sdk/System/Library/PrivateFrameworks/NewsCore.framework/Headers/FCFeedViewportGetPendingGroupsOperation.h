/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class FCFeedGroupEmittingContext, FCFeedRefreshSession, NSArray, NSDictionary;

@interface FCFeedViewportGetPendingGroupsOperation : FCOperation

{
    _Bool _lightweightOnly;
    FCFeedRefreshSession *_refreshSession;
    NSArray *_feedGroupEmitters;
    FCFeedGroupEmittingContext *_groupEmittingContext;
    NSDictionary *_toCursorsByEmitterID;
    CDUnknownBlockType _emitGroupsCompletionHandler;
    FCFeedRefreshSession *_resultRefreshSession;
}

@property (retain, nonatomic) FCFeedRefreshSession *resultRefreshSession;
@property (retain, nonatomic) FCFeedRefreshSession *refreshSession;
@property (retain, nonatomic) NSArray *feedGroupEmitters;
@property (retain, nonatomic) FCFeedGroupEmittingContext *groupEmittingContext;
@property (retain, nonatomic) NSDictionary *toCursorsByEmitterID;
@property _Bool lightweightOnly;
@property (copy, nonatomic) CDUnknownBlockType emitGroupsCompletionHandler;

- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (id)_advanceRefreshSessionToNextInterestedEmitter:(id)arg1;
- (_Bool)_isErrorTransient:(id)arg1;
- (id)_exhaustGroupEmitter:(id)arg1 inRefreshSession:(id)arg2;

@end
