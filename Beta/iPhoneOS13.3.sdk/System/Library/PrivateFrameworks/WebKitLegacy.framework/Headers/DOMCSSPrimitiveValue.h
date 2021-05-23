/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMCSSValue.h>

@interface DOMCSSPrimitiveValue : DOMCSSValue

@property (readonly) unsigned short primitiveType;

- (id)getStringValue;
- (float)getFloatValue:(unsigned short)arg1;
- (id)getRGBColorValue;
- (void)setFloatValue:(unsigned short)arg1 floatValue:(float)arg2;
- (void)setStringValue:(unsigned short)arg1 stringValue:(id)arg2;
- (id)getCounterValue;
- (id)getRectValue;
- (void)setFloatValue:(unsigned short)arg1:(float)arg2;
- (void)setStringValue:(unsigned short)arg1:(id)arg2;

@end
