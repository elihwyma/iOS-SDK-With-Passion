/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/EQKitMathMLNode.h>

@interface EQKitMathMLBinaryNode : EQKitMathMLNode

{
    EQKitMathMLNode *mFirst;
    EQKitMathMLNode *mSecond;
}

- (id)init;
- (void)dealloc;
- (id)initWithFirst:(id)arg1 second:(id)arg2;
- (_Bool)isBaseFontNameUsed;
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;
- (const set_25e6ba53 *)mathMLAttributes;

@end
