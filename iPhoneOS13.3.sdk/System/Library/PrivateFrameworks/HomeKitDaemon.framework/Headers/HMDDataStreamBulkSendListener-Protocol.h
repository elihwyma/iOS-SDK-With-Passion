//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol HMDDataStreamBulkSendSessionCandidate;

@protocol HMDDataStreamBulkSendListener <NSObject>
- (void)accessoryDidCloseDataStream:(id)arg1;
- (void)accessoryDidStartListening:(id)arg1;
- (void)accessory:(id)arg1 didReceiveBulkSessionCandidate:(id <HMDDataStreamBulkSendSessionCandidate>)arg2;
@end

