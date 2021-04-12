//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKViewController.h>

@class HKMedicalRecord, HRProfile, UIBarButtonItem, UITextView;

__attribute__((visibility("hidden")))
@interface WDMedicalRecordSourceDataViewController : HKViewController
{
    BOOL _hasFetchedSourceString;
    HKMedicalRecord *_medicalRecord;
    HRProfile *_profile;
    UITextView *_sourceView;
    UIBarButtonItem *_shareItem;
}

@property(retain, nonatomic) UIBarButtonItem *shareItem; // @synthesize shareItem=_shareItem;
@property(nonatomic) BOOL hasFetchedSourceString; // @synthesize hasFetchedSourceString=_hasFetchedSourceString;
@property(readonly, nonatomic) UITextView *sourceView; // @synthesize sourceView=_sourceView;
@property(readonly, nonatomic) HRProfile *profile; // @synthesize profile=_profile;
@property(readonly, copy, nonatomic) HKMedicalRecord *medicalRecord; // @synthesize medicalRecord=_medicalRecord;
// - (void).cxx_destruct;
- (void)displaySourceString:(id)arg1;
- (void)_fetchAndDisplaySourceStringIfNecessary;
- (void)_tapToRadar:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)share:(id)arg1;
- (void)loadView;
- (id)initWithProfile:(id)arg1 medicalRecord:(id)arg2;

@end

