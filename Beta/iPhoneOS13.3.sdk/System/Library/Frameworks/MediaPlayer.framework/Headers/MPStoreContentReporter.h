/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSOperationQueue;

@interface MPStoreContentReporter : NSObject

{
    NSOperationQueue *_operationQueue;
    NSDictionary *_reportConcernBagDictionary;
}

+ (id)sharedReporter;

- (id)init;
- (id)_reportConcernBagDictionary;
- (void)submitReport:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteComment:(id)arg1 activityID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deletePost:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performWithBag:(CDUnknownBlockType)arg1;
- (id)reportsForType:(long long)arg1 contentID:(id)arg2 aucType:(id)arg3 commentText:(id)arg4;
- (id)baseURLStringForReport;
- (id)_dictionariesForType:(long long)arg1;
- (id)_deleteCommentURLComponentsFromBag:(id)arg1;
- (id)_deletePostURLComponentsFromBag:(id)arg1;

@end
