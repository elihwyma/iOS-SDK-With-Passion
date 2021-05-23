/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/Swift-Protocol.h>

@protocol IKApplication <Swift>

- (unsigned short)localStorage;
- (unsigned short)appIdentifier;
- (unsigned short)vendorIdentifier;
- (unsigned short)vendorStorage;
- (unsigned short)userDefaultsStorage;
- (unsigned short)appJSURL;
- (unsigned short)shouldIgnoreJSValidation;

@end
