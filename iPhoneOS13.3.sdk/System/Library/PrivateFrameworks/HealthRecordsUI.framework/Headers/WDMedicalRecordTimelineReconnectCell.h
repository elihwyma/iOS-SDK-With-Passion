//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthRecordsUI/WDMedicalRecordGroupableCell.h>

@class HKDynamicButton;

__attribute__((visibility("hidden")))
@interface WDMedicalRecordTimelineReconnectCell : WDMedicalRecordGroupableCell
{
    HKDynamicButton *_reconnectButton;
}

@property(retain, nonatomic) HKDynamicButton *reconnectButton; // @synthesize reconnectButton=_reconnectButton;
// - (void).cxx_destruct;
- (void)_updateBasedOnAccessibilityCategory:(BOOL)arg1;
- (void)_updateForContentSizeCategory:(id)arg1;
- (void)prepareForReuse;
- (void)setUpConstraints;
- (void)setupSubviews;

@end

