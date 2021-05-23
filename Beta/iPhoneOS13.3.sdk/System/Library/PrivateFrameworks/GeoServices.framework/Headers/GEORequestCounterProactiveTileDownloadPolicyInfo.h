/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

@class NSDate;

@interface GEORequestCounterProactiveTileDownloadPolicyInfo : NSObject <Swift>

{
    unsigned char _policy;
    NSDate *_startTimestamp;
    NSDate *_endTimestamp;
    unsigned long long _tilesConsidered;
    unsigned long long _successCount;
    unsigned long long _failureCount;
    unsigned long long _bytesDownloaded;
}

@property (nonatomic, readonly) unsigned char policy;
@property (nonatomic, readonly) NSDate *startTimestamp;
@property (nonatomic, readonly) NSDate *endTimestamp;
@property (nonatomic, readonly) unsigned long long tilesConsidered;
@property (nonatomic, readonly) unsigned long long successCount;
@property (nonatomic, readonly) unsigned long long failureCount;
@property (nonatomic, readonly) unsigned long long bytesDownloaded;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPolicy:(unsigned char)arg1 startTimestamp:(id)arg2 endTimestamp:(id)arg3 tilesConsidered:(unsigned long long)arg4 successCount:(unsigned long long)arg5 failureCount:(unsigned long long)arg6 bytesDownloaded:(unsigned long long)arg7;

@end
