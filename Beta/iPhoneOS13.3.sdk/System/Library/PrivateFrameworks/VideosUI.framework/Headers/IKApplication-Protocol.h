/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/Swift-Protocol.h>

@protocol IKApplication <Swift>

- (unsigned short)localStorage;
- (unsigned short)appIdentifier;
- (unsigned short)vendorIdentifier;
- (unsigned short)vendorStorage;
- (unsigned short)userDefaultsStorage;
- (unsigned short)appJSURL;
- (unsigned short)shouldIgnoreJSValidation;

@end
