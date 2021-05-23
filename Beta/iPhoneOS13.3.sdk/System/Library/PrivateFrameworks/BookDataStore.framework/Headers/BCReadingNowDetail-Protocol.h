/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <BookDataStore/Swift-Protocol.h>

@class NSDate, NSString;

@protocol BCReadingNowDetail <Swift>

@property (copy, nonatomic, readonly) NSString *assetID;
@property (nonatomic, readonly) _Bool isTrackedAsRecent;
@property (copy, nonatomic, readonly) NSDate *lastEngagedDate;

@end
