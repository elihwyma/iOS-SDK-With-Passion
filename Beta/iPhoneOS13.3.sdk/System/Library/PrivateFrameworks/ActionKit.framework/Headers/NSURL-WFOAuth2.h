/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSURL.h>

@interface NSURL (WFOAuth2)

+ (id)URLWithUnicodeString:(id)arg1;

- (id)wfo_normalizedURLComponents;
- (id)wfo_URLByAppendingQueryItems:(id)arg1;
- (_Bool)wfo_isEqualToRedirectURI:(id)arg1;
- (id)initWithUnicodeString:(id)arg1;
- (id)unicodeAbsoluteString;
- (id)unicodeHost;

@end
