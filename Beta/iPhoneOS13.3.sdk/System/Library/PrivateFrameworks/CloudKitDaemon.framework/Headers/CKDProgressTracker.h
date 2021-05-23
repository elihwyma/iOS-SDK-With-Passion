/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface CKDProgressTracker : NSObject

{
    _Bool _hasCachedTotalBytes;
    _Bool _hasCachedCompletedBytes;
    double _lastItemPercentage;
    unsigned long long _cachedTotalBytes;
    unsigned long long _cachedCompletedBytes;
    NSMapTable *_completedBytesByItems;
    NSString *_trackingID;
}

@property (nonatomic) _Bool hasCachedTotalBytes;
@property (nonatomic) _Bool hasCachedCompletedBytes;
@property (nonatomic) unsigned long long cachedTotalBytes;
@property (nonatomic) unsigned long long cachedCompletedBytes;
@property (retain, nonatomic) NSMapTable *completedBytesByItems;
@property (retain, nonatomic) NSString *trackingID;
@property (nonatomic) double lastItemPercentage;

+ (unsigned long long)_sizeForItem:(id)arg1;

- (id)init;
- (id)initWithTrackingID:(id)arg1;
- (void)stopTrackingItems:(id)arg1;
- (void)startTrackingItems:(id)arg1;
- (double)updateProgressWithItem:(id)arg1 progress:(double)arg2;
- (unsigned long long)_updateTotalBytes;
- (unsigned long long)_updateTotalCompletedBytes;

@end
