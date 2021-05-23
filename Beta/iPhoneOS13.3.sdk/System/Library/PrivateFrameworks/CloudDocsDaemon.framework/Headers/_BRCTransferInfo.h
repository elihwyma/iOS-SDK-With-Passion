/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class BRCProgress, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _BRCTransferInfo : NSObject

{
    BRCProgress *_progress;
    long long sumOfCompletedUnitCountDelta;
    long long sumOfTotalUnitCountDelta;
    NSMutableDictionary *_versionSizes;
    NSMutableDictionary *_childProgresses;
    NSMutableDictionary *_previousUnitCounts;
}

@property (nonatomic, readonly) BRCProgress *progress;
@property (nonatomic) long long sumOfCompletedUnitCountDelta;
@property (nonatomic) long long sumOfTotalUnitCountDelta;
@property (nonatomic, readonly) NSMutableDictionary *versionSizes;
@property (nonatomic, readonly) NSMutableDictionary *childProgresses;
@property (nonatomic, readonly) NSMutableDictionary *previousUnitCounts;

- (id)init;
- (id)description;
- (void)updateUnitCount;
- (void)updateLocalizedDescriptionWithOptions:(BOOL)arg1;
- (void)copyProgressInfoToProgress:(id)arg1 options:(BOOL)arg2;
- (void)verifyFutureProgressIsNotFinished;

@end
