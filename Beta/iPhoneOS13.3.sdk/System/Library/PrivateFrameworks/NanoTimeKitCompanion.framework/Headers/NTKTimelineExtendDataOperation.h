/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKTimelineDataOperation.h>

@class NSDate;

@interface NTKTimelineExtendDataOperation : NTKTimelineDataOperation

{
    _Bool _extendsLeft;
    NSDate *_boundaryDate;
    CDUnknownBlockType _handler;
}

@property (copy, nonatomic) CDUnknownBlockType handler;

- (void)_start;
- (void)_cancel;
- (void)_extendLeft;
- (void)_extendRight;
- (void)_invokeHandlerWithEntries:(id)arg1;
- (void)setExtendsLeftFromDate:(id)arg1;
- (void)setExtendsRightFromDate:(id)arg1;

@end
