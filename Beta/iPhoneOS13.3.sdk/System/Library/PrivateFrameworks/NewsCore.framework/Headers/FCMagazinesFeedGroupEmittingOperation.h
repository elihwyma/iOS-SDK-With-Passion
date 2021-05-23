/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@interface FCMagazinesFeedGroupEmittingOperation : FCFeedGroupEmittingOperation

- (_Bool)validateOperation;
- (void)performOperation;
- (id)magazineFeedManager;
- (id)magazineFromCursor;
- (void)fetchNextUnseenGroupFromCursor:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
