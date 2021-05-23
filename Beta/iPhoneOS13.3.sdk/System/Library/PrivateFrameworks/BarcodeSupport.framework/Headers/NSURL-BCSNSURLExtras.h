/*
 Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

#import <Foundation/NSURL.h>

@interface NSURL (BCSNSURLExtras)

+ (id)_bcs_searchURLWithQuery:(id)arg1;
+ (id)_bcs_appStoreSearchURLWithScheme:(id)arg1;
+ (id)_bcs_URLWithUserTypedString:(id)arg1;

- (id)_bcs_displayString;
- (_Bool)_bcs_isDataDetectorURL;
- (_Bool)_bcs_isHTTPFamilyURL;
- (id)_bcs_fullURLDisplayString;
- (_Bool)_bcs_isMapsURL;

@end
