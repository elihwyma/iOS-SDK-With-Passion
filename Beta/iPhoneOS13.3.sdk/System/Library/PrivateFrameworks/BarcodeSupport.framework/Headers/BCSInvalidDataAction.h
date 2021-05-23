/*
 Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

#import <BarcodeSupport/BCSAction.h>

__attribute__((visibility("hidden")))
@interface BCSInvalidDataAction : BCSAction

- (void)performDefaultAction;
- (id)actionPickerItems;
- (id)localizedDefaultActionDescription;
- (id)initWithData:(id)arg1 codePayload:(id)arg2;
- (_Bool)isInvalidDataAction;

@end
