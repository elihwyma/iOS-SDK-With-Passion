/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKTimelineDataOperation.h>

@class NSDate;

@interface NTKTimelineUpdateEndDateOperation : NTKTimelineDataOperation

{
    NSDate *_endDate;
    CDUnknownBlockType _handler;
}

@property (copy, nonatomic) CDUnknownBlockType handler;

- (void)_start;
- (void)_cancel;
- (void)_getEndDate;
- (void)_invokeHandler;

@end
