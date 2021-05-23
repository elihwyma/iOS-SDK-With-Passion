/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <BookDataStore/Swift-Protocol.h>

@class NSData, NSDate, NSString;

@protocol BCAssetDetail <Swift>

@property (copy, nonatomic, readonly) NSString *assetID;
@property (nonatomic, readonly) _Bool isFinished;
@property (nonatomic, readonly) _Bool notFinished;
@property (copy, nonatomic, readonly) NSDate *lastOpenDate;
@property (copy, nonatomic, readonly) NSDate *dateFinished;
@property (nonatomic, readonly) short taste;
@property (nonatomic, readonly) short tasteSyncedToStore;
@property (nonatomic, readonly) float readingProgress;
@property (nonatomic, readonly) float readingProgressHighWaterMark;
@property (copy, nonatomic, readonly) NSString *readingPositionCFIString;
@property (copy, nonatomic, readonly) NSString *readingPositionAnnotationVersion;
@property (copy, nonatomic, readonly) NSString *readingPositionAssetVersion;
@property (copy, nonatomic, readonly) NSData *readingPositionUserData;
@property (nonatomic, readonly) int readingPositionLocationRangeStart;
@property (nonatomic, readonly) int readingPositionLocationRangeEnd;
@property (nonatomic, readonly) int readingPositionAbsolutePhysicalLocation;
@property (copy, nonatomic, readonly) NSString *readingPositionStorageUUID;
@property (copy, nonatomic, readonly) NSDate *readingPositionLocationUpdateDate;
@property (copy, nonatomic, readonly) NSDate *datePlaybackTimeUpdated;
@property (nonatomic, readonly) double bookmarkTime;

@end
