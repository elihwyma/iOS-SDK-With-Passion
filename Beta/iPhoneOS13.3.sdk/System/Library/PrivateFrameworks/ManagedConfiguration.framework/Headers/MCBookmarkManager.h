/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

@protocol OS_dispatch_queue;

@interface MCBookmarkManager : NSObject

{
    int _notificationToken;
    NSObject<OS_dispatch_queue> *_memberQueue;
    NSArray *_memberQueueCurrentUserBookmarks;
    NSDictionary *_memberQueueStashedBookmarksByLabel;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue;
@property (retain, nonatomic) NSArray *memberQueueCurrentUserBookmarks;
@property (retain, nonatomic) NSDictionary *memberQueueStashedBookmarksByLabel;
@property (nonatomic) int notificationToken;
@property (copy, nonatomic) NSArray *userBookmarks;

+ (id)sharedManager;

- (id)init;
- (void)memberQueueRereadBookmarks;
- (void)memberQueueSetUserBookmarks:(id)arg1;
- (void)memberQueueSetStashedUserBookmarksByLabel:(id)arg1;
- (void)memberQueueStashUserBookmarksWithLabel:(id)arg1 newUserBookmarks:(id)arg2;
- (void)stashUserBookmarksWithLabel:(id)arg1 newUserBookmarks:(id)arg2;
- (void)unstashUserBookmarksFromLabel:(id)arg1;

@end
