/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMObject.h>

@class DOMCSSPrimitiveValue;

@interface DOMRGBColor : DOMObject

@property (readonly) DOMCSSPrimitiveValue *red;
@property (readonly) DOMCSSPrimitiveValue *green;
@property (readonly) DOMCSSPrimitiveValue *blue;
@property (readonly) DOMCSSPrimitiveValue *alpha;

- (void)dealloc;
- (struct CGColor *)color;

@end
