/*
 Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

#import <UIKit/UIViewController.h>

@class AMSBTLEAdvertisementManager, NSString, NSTimer, UIActivityIndicatorView, UITextField;

@interface CABTMIDILocalPeripheralViewController : UIViewController

{
    AMSBTLEAdvertisementManager *advertisingManager;
    NSString *statusString;
    UITextField *serviceNameField;
    _Bool advertising;
    _Bool isErrorMessage;
    UIActivityIndicatorView *indicator;
    NSString *theServiceName;
    long long advertiseTimeout;
    long long fullRefreshCounter;
    NSTimer *advertiseTimer;
    NSTimer *messageTimer;
    _Bool didCleanup;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)title;
- (void)cleanup;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)didReceiveMemoryWarning;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (id)statusString;
- (void)activateController:(id)arg1;
- (void)stopTimers;
- (id)advertisedServiceName;
- (void)advertiseTimerFired:(id)arg1;
- (void)updateAdvertiseUI;
- (void)deactivateController:(id)arg1;
- (_Bool)advertiseServiceWithName:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (_Bool)stopAdvertisingServiceWithCompletionBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (void)setStatusString:(id)arg1 animateIndicator:(_Bool)arg2 isError:(_Bool)arg3;
- (void)textFieldDone:(id)arg1;
- (void)advertiseServiceSwitchToggled:(id)arg1;
- (_Bool)changeServiceNameTo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (void)messageTimerFired:(id)arg1;
- (_Bool)disconnectLocalPeripheral;

@end
