//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKHealthStore, SOSContactsManager, UIAlertController, UIViewController, WDNotificationManager, _HKMedicalIDData;

@interface WDContactConsolidationController : NSObject
{
    HKHealthStore *_healthStore;
    _HKMedicalIDData *_medicalIDData;
    SOSContactsManager *_sosContactsManager;
    WDNotificationManager *_notificationManager;
    UIViewController *_presentingViewController;
    UIAlertController *_consolidationAlertController;
    id /* CDUnknownBlockType */ _completionHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) __weak UIAlertController *consolidationAlertController; // @synthesize consolidationAlertController=_consolidationAlertController;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain, nonatomic) WDNotificationManager *notificationManager; // @synthesize notificationManager=_notificationManager;
@property(retain, nonatomic) SOSContactsManager *sosContactsManager; // @synthesize sosContactsManager=_sosContactsManager;
@property(retain, nonatomic) _HKMedicalIDData *medicalIDData; // @synthesize medicalIDData=_medicalIDData;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
// - (void).cxx_destruct;
- (void)_consolidateSOSContactsWithMedicalIDContacts;
- (void)_showLearnMoreViewController;
- (void)presentContactsConsolidationAlert;
- (void)checkAlertNecessity;
- (void)presentContactConsolidationAlertWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic) BOOL isPresentingConsolidationAlert;
- (id)initWithProfile:(id)arg1 presentingViewController:(id)arg2;

@end

