/*
 Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

#import <BarcodeSupport/BCSAction.h>

__attribute__((visibility("hidden")))
@interface BCSWiFiConfigurationAction : BCSAction

- (void)performDefaultAction;
- (id)actionPickerItems;
- (id)localizedDefaultActionDescription;
- (id)initWithData:(id)arg1 codePayload:(id)arg2;
- (id)debugDescriptionExtraInfoDictionary;
- (void)performDefaultActionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)isWiFiAction;
- (id)_wiFiConfigurationData;

@end
