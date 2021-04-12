//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;
@protocol OS_dispatch_queue;

@interface MCBookmarkManager : NSObject
{
    int _notificationToken;
    NSObject<OS_dispatch_queue> *_memberQueue;
    NSArray *_memberQueueCurrentUserBookmarks;
    NSDictionary *_memberQueueStashedBookmarksByLabel;
}

+ (id)sharedManager;
@property(nonatomic) int notificationToken; // @synthesize notificationToken=_notificationToken;
@property(retain, nonatomic) NSDictionary *memberQueueStashedBookmarksByLabel; // @synthesize memberQueueStashedBookmarksByLabel=_memberQueueStashedBookmarksByLabel;
@property(retain, nonatomic) NSArray *memberQueueCurrentUserBookmarks; // @synthesize memberQueueCurrentUserBookmarks=_memberQueueCurrentUserBookmarks;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // @synthesize memberQueue=_memberQueue;
// - (void).cxx_destruct;
- (void)unstashUserBookmarksFromLabel:(id)arg1;
- (void)stashUserBookmarksWithLabel:(id)arg1 newUserBookmarks:(id)arg2;
- (void)memberQueueStashUserBookmarksWithLabel:(id)arg1 newUserBookmarks:(id)arg2;
- (void)memberQueueSetStashedUserBookmarksByLabel:(id)arg1;
@property(copy, nonatomic) NSArray *userBookmarks;
- (void)memberQueueSetUserBookmarks:(id)arg1;
- (void)memberQueueRereadBookmarks;
- (id)init;

@end

