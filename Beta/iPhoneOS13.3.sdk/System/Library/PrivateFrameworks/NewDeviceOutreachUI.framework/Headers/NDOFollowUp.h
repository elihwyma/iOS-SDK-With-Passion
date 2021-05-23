/*
 Image: /System/Library/PrivateFrameworks/NewDeviceOutreachUI.framework/NewDeviceOutreachUI
 */

#import <Foundation/NSObject.h>

@interface NDOFollowUp : NSObject

- (void)clearFollowUp;
- (void)_setupFollowUpItem:(id)arg1 withWarranty:(id)arg2 serialNumber:(id)arg3;
- (void)postFollowUpWithWarranty:(id)arg1 serialNumber:(id)arg2;
- (_Bool)refreshFollowupWithWarranty:(id)arg1 serialNumber:(id)arg2;
- (_Bool)followupExists;

@end
