/*
 Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

#import <BarcodeSupport/BCSAction.h>

__attribute__((visibility("hidden")))
@interface BCSStringAction : BCSAction

- (void)performAction;
- (void)performDefaultAction;
- (id)actionPickerItems;
- (id)localizedDefaultActionDescription;
- (id)defaultActionTargetApplicationBundleIdentifier;
- (id)initWithData:(id)arg1 codePayload:(id)arg2;

@end
