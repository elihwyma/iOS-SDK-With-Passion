/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsTransport/NTPBRecordBase.h>

@interface NTPBRecordBase (FCAssetURLExpiration)

@property (nonatomic, readonly) _Bool needsAssetURLRefresh;
@property (nonatomic, readonly) _Bool hasExpiredAssetURLs;

- (_Bool)fc_isCachedAgeGreaterThan:(double)arg1;
- (_Bool)fc_isCachedAgeLessThan:(double)arg1;

@end
