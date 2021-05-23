/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

#import <NeutrinoCore/Swift-Protocol.h>

@interface NUStoragePoolStats : NSObject <Swift>

{
    long long _peakTotalBytes;
    long long _usedCount;
    long long _usedBytes;
    long long _peakUsedBytes;
    long long _nonPurgeableCount;
    long long _nonPurgeableBytes;
    long long _peakNonPurgeableBytes;
    long long _volatileCount;
    long long _volatileBytes;
    long long _peakVolatileBytes;
    long long _discardedCount;
    long long _migrationCount;
    long long _migrationBytes;
    long long _purgedCount;
    long long _purgedBytes;
    long long _requestCount;
    long long _reusedNonPurgeableCount;
    long long _reusedVolatileCount;
}

@property (nonatomic, readonly) long long totalCount;
@property (nonatomic, readonly) long long totalBytes;
@property (nonatomic, readonly) long long peakTotalBytes;
@property (nonatomic) long long usedCount;
@property (nonatomic) long long usedBytes;
@property (nonatomic, readonly) long long peakUsedBytes;
@property (nonatomic) long long nonPurgeableCount;
@property (nonatomic) long long nonPurgeableBytes;
@property (nonatomic, readonly) long long peakNonPurgeableBytes;
@property (nonatomic) long long volatileCount;
@property (nonatomic) long long volatileBytes;
@property (nonatomic, readonly) long long peakVolatileBytes;
@property (nonatomic) long long discardedCount;
@property (nonatomic) long long migrationCount;
@property (nonatomic) long long migrationBytes;
@property (nonatomic) long long purgedCount;
@property (nonatomic) long long purgedBytes;
@property (nonatomic) long long requestCount;
@property (nonatomic) long long reusedNonPurgeableCount;
@property (nonatomic) long long reusedVolatileCount;
@property (nonatomic, readonly) long long reusedCount;
@property (nonatomic, readonly) float reusedRate;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
