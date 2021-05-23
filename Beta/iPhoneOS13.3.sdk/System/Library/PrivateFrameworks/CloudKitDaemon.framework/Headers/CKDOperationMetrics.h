/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface CKDOperationMetrics : NSObject

{
    NSDate *_startDate;
    double _duration;
    double _queueing;
    double _executing;
    unsigned long long _bytesUploaded;
    unsigned long long _bytesDownloaded;
    unsigned long long _connections;
    unsigned long long _connectionsCreated;
    unsigned long long _recordsUploaded;
    unsigned long long _recordsDownloaded;
    unsigned long long _recordsDeleted;
    unsigned long long _assetsUploaded;
    unsigned long long _assetsUploadedFileSize;
    unsigned long long _assetsDownloaded;
    unsigned long long _assetsDownloadedFileSize;
    unsigned long long _requestCount;
    unsigned long long _retries;
    NSMutableSet *_requestUUIDs;
    NSMutableDictionary *_requestOperationCountsByType;
    NSMutableDictionary *_totalBytesByChunkProfile;
    NSMutableDictionary *_chunkCountByChunkProfile;
    NSMutableDictionary *_fileCountByChunkProfile;
    NSMutableArray *_ranges;
}

@property (retain, nonatomic) NSMutableArray *ranges;
@property (retain) NSDate *startDate;
@property double duration;
@property double queueing;
@property double executing;
@property unsigned long long bytesUploaded;
@property unsigned long long bytesDownloaded;
@property unsigned long long connections;
@property unsigned long long connectionsCreated;
@property unsigned long long recordsUploaded;
@property unsigned long long recordsDownloaded;
@property unsigned long long recordsDeleted;
@property unsigned long long assetsUploaded;
@property unsigned long long assetsUploadedFileSize;
@property unsigned long long assetsDownloaded;
@property unsigned long long assetsDownloadedFileSize;
@property unsigned long long requestCount;
@property unsigned long long retries;
@property (readonly) NSMutableSet *requestUUIDs;
@property (retain, nonatomic) NSMutableDictionary *requestOperationCountsByType;
@property (retain, nonatomic) NSMutableDictionary *totalBytesByChunkProfile;
@property (retain, nonatomic) NSMutableDictionary *chunkCountByChunkProfile;
@property (retain, nonatomic) NSMutableDictionary *fileCountByChunkProfile;
@property (readonly) NSArray *rangesCopy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)CKPropertiesDescription;
- (void)addRange:(id)arg1;
- (void)addCKSpecificMetricsFromMetrics:(id)arg1;
- (id)newRangeWithOperationState:(unsigned long long)arg1 startDate:(id)arg2 duration:(double)arg3;
- (void)addRequestOperationCountsByOperationType:(id)arg1;
- (id)_initWithStartDate:(id)arg1;

@end
