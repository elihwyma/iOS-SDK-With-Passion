//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CUCaptureController;

@protocol CAMSuggestionDelegate <NSObject>
- (void)captureController:(CUCaptureController *)arg1 didOutputLowLightModeDurationMapping:(CDStruct_c3b9c2ee)arg2;
- (void)captureController:(CUCaptureController *)arg1 didOutputLowLightStatus:(long long)arg2;
- (void)captureController:(CUCaptureController *)arg1 didOutputHDRSuggestion:(BOOL)arg2;
- (void)captureController:(CUCaptureController *)arg1 didOutputTorchActive:(BOOL)arg2;
- (void)captureController:(CUCaptureController *)arg1 didOutputFlashActive:(BOOL)arg2;
@end

