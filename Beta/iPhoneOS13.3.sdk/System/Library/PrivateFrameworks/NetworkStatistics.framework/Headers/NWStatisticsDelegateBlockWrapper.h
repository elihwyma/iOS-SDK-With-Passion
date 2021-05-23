/*
 Image: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NWStatisticsDelegateBlockWrapper : NSObject

{
    CDUnknownBlockType _addedBlock;
    CDUnknownBlockType _countsBlock;
    CDUnknownBlockType _descriptionBlock;
    CDUnknownBlockType _removedBlock;
    CDUnknownBlockType _eventsBlock;
}

@property (copy) CDUnknownBlockType addedBlock;
@property (copy) CDUnknownBlockType countsBlock;
@property (copy) CDUnknownBlockType descriptionBlock;
@property (copy) CDUnknownBlockType removedBlock;
@property (copy) CDUnknownBlockType eventsBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)sourceDidReceiveCounts:(id)arg1;
- (void)sourceDidReceiveDescription:(id)arg1;
- (void)statisticsManager:(id)arg1 didAddSource:(id)arg2;
- (void)statisticsManager:(id)arg1 didRemoveSource:(id)arg2;

@end
