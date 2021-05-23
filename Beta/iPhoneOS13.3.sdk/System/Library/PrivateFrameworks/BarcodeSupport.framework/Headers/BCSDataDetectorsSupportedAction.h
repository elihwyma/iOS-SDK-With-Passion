/*
 Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

#import <BarcodeSupport/BCSAction.h>

@class CNContact, DDScannerResult, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface BCSDataDetectorsSupportedAction : BCSAction

{
    NSArray *_actions;
    DDScannerResult *_scannerResult;
    CNContact *_contact;
    NSString *_icsString;
}

@property (nonatomic, readonly) DDScannerResult *scannerResult;
@property (copy, nonatomic, readonly) CNContact *contact;
@property (copy, nonatomic, readonly) NSString *icsString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)url;
- (void)performAction;
- (void)performDefaultAction;
- (id)actionPickerItems;
- (id)localizedDefaultActionDescription;
- (id)defaultActionTargetApplicationBundleIdentifier;
- (id)initWithData:(id)arg1 codePayload:(id)arg2;
- (void)determineActionabilityWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)localizedActionDescription;
- (id)debugDescriptionExtraInfoDictionary;
- (void)_performActionAndShowActionPickerIfNeeded:(_Bool)arg1;
- (id)_actionStringsArray;

@end
