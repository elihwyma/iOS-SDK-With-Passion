/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@protocol OS_dispatch_queue;

@interface MPCReportingController : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableArray *_childReportingControllers;
    MPCReportingController *_parentReportingController;
}

@property (weak, nonatomic) MPCReportingController *parentReportingController;
@property (copy, nonatomic, readonly) NSArray *childReportingControllers;

- (id)init;
- (void)_recordReportingEvents:(id)arg1;
- (void)addChildReportingController:(id)arg1;
- (void)recordReportingEvents:(id)arg1;
- (void)removeChildReportingController:(id)arg1;

@end
