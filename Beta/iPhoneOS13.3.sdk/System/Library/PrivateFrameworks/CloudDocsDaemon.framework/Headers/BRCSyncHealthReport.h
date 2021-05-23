/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BRCSyncHealthReport : NSObject

{
    NSMutableDictionary *_syncUpErrorsByZone;
    NSMutableDictionary *_syncDownErrorsByZone;
    NSMutableDictionary *_uploadFailureCountByError;
    NSMutableDictionary *_downloadFailureCountByError;
    unsigned long long _totalZoneCount;
    unsigned long long _blockedZonesCount;
    unsigned long long _totalItemsCount;
}

@property (nonatomic, readonly) unsigned long long totalZoneCount;
@property (nonatomic, readonly) unsigned long long blockedZonesCount;
@property (nonatomic, readonly) unsigned long long totalItemsCount;
@property (nonatomic, readonly) NSDictionary *syncUpErrorsByZone;
@property (nonatomic, readonly) NSDictionary *syncDownErrorsByZone;
@property (nonatomic, readonly) NSDictionary *uploadFailureCountByError;
@property (nonatomic, readonly) NSDictionary *downloadFailureCountByError;

- (id)init;
- (void)generateReportWithSession:(id)arg1;
- (void)syncErrors:(CDUnknownBlockType)arg1;

@end
