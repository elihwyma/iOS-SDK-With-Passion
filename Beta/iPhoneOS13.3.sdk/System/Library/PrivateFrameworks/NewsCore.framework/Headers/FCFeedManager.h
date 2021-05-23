/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCCloudContext, NFMutexLock, NSMapTable;

@protocol FCFeedPersonalizing, OS_dispatch_group;

@interface FCFeedManager : NSObject

{
    id <FCFeedPersonalizing> _feedPersonalizer;
    long long _savedStoriesCount;
    FCCloudContext *_context;
    NSMapTable *_feedDescriptorsByID;
    NFMutexLock *_feedDescriptorsLock;
    NSObject<OS_dispatch_group> *_forYouPrefetchGroup;
}

@property (retain, nonatomic) FCCloudContext *context;
@property (retain, nonatomic) NSMapTable *feedDescriptorsByID;
@property (retain, nonatomic) NFMutexLock *feedDescriptorsLock;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *forYouPrefetchGroup;
@property (retain, nonatomic) id <FCFeedPersonalizing> feedPersonalizer;
@property (nonatomic) long long savedStoriesCount;

+ (id)_identifierForFeedName:(id)arg1;
+ (id)feedDescriptorNameForForYou;
+ (id)feedDescriptorNameForReadingHistory;
+ (id)feedDescriptorNameForReadingList;

- (id)init;
- (id)feedDescriptorForTag:(id)arg1;
- (id)initWithCloudContext:(id)arg1;
- (id)feedDescriptorForForYou;
- (void)prefetchForYouWithHighPriority:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)notifyWhenForYouPrefetchIsCompleteWithBlock:(CDUnknownBlockType)arg1;
- (id)feedDescriptorWithIdentifier:(id)arg1;
- (id)_feedDescriptorWithIdentifier:(id)arg1 forceRecreate:(_Bool)arg2 tag:(id)arg3;
- (id)feedDescriptorForReadingHistory;
- (id)feedDescriptorForReadingList;
- (id)feedDescriptorForArticlesInSameClusterAsArticleID:(id)arg1;

@end
