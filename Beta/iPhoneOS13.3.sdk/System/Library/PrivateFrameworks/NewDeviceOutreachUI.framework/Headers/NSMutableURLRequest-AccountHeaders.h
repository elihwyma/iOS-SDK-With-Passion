/*
 Image: /System/Library/PrivateFrameworks/NewDeviceOutreachUI.framework/NewDeviceOutreachUI
 */

#import <Foundation/NSMutableURLRequest.h>

@interface NSMutableURLRequest (AccountHeaders)

- (id)_userAgent;
- (id)headerDescription;
- (_Bool)_addGSHeadersForAccount:(id)arg1 withStore:(id)arg2 forceReprovisioning:(_Bool)arg3 avoidUI:(_Bool)arg4;
- (_Bool)ndo_signWithAccountHeaders:(_Bool)arg1 avoidUI:(_Bool)arg2;
- (void)ndo_setCoverageRequestBodyWithSerialNumber:(id)arg1;
- (void)ndo_addOASHeadersWithOfferID:(id)arg1 serialNumber:(id)arg2;
- (id)bodyDescription;

@end
