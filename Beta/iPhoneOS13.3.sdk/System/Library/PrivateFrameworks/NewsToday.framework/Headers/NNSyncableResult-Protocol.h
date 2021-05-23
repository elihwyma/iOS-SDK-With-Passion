/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <NewsToday/Swift-Protocol.h>

@class NSArray, NSDate;

@protocol NNSyncableResult <Swift>

@property (nonatomic, readonly) NSArray *sync_sections;
@property (nonatomic, readonly) NSDate *sync_expirationDate;
@property (nonatomic, readonly) unsigned long long sync_headlineCount;

@end
