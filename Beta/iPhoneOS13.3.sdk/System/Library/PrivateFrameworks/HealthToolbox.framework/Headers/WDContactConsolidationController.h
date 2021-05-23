/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <Foundation/NSObject.h>

@class HKHealthStore, SOSContactsManager, UIAlertController, UIViewController, WDNotificationManager, _HKMedicalIDData;

@interface WDContactConsolidationController : NSObject

{
    HKHealthStore *_healthStore;
    _HKMedicalIDData *_medicalIDData;
    SOSContactsManager *_sosContactsManager;
    WDNotificationManager *_notificationManager;
    UIViewController *_presentingViewController;
    UIAlertController *_consolidationAlertController;
    CDUnknownBlockType _completionHandler;
}

@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) _HKMedicalIDData *medicalIDData;
@property (retain, nonatomic) SOSContactsManager *sosContactsManager;
@property (retain, nonatomic) WDNotificationManager *notificationManager;
@property (weak, nonatomic) UIViewController *presentingViewController;
@property (weak, nonatomic) UIAlertController *consolidationAlertController;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (nonatomic, readonly) _Bool isPresentingConsolidationAlert;

- (id)initWithProfile:(id)arg1 presentingViewController:(id)arg2;
- (void)_consolidateSOSContactsWithMedicalIDContacts;
- (void)checkAlertNecessity;
- (void)presentContactsConsolidationAlert;
- (void)_showLearnMoreViewController;
- (void)presentContactConsolidationAlertWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
