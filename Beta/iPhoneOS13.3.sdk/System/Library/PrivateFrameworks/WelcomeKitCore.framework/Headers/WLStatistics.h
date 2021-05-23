/*
 Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface WLStatistics : NSObject

{
    _Bool _selectedForMigration;
    NSString *_contentType;
    unsigned long long _downloadDuration;
    unsigned long long _downloadByteCount;
    NSDate *_importStartDate;
    NSDate *_importEndDate;
    unsigned long long _importStartBytesFree;
    unsigned long long _importEndBytesFree;
    unsigned long long _importRecordCount;
    unsigned long long _importFailedRecordCount;
}

@property (nonatomic, readonly) NSString *contentType;
@property (nonatomic) _Bool selectedForMigration;
@property (nonatomic) unsigned long long downloadDuration;
@property (nonatomic) unsigned long long downloadByteCount;
@property (retain, nonatomic) NSDate *importStartDate;
@property (retain, nonatomic) NSDate *importEndDate;
@property (nonatomic) unsigned long long importStartBytesFree;
@property (nonatomic) unsigned long long importEndBytesFree;
@property (nonatomic) unsigned long long importRecordCount;
@property (nonatomic) unsigned long long importFailedRecordCount;

+ (id)_statisticsWithContentType:(id)arg1;
+ (id)aggregateContentType;
+ (id)fetchContentType;

- (id)description;
- (void)addToFetchByteCount:(unsigned long long)arg1;
- (void)incrementFetchRequestCount;
- (void)incrementFetchFailedRequestCount;
- (unsigned long long)downloadBytesPerSecond;
- (unsigned long long)importDuration;
- (long long)importBytesUsed;
- (void)setFetchDuration:(unsigned long long)arg1;
- (void)setFetchStartBytesFree:(unsigned long long)arg1;
- (void)setFetchEndBytesFree:(unsigned long long)arg1;
- (id)fetchLogString;

@end
