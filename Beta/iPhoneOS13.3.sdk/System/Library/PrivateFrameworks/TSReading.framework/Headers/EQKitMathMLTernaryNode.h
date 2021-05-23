/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/EQKitMathMLNode.h>

@interface EQKitMathMLTernaryNode : EQKitMathMLNode

{
    EQKitMathMLNode *mFirst;
    EQKitMathMLNode *mSecond;
    EQKitMathMLNode *mThird;
}

- (id)init;
- (void)dealloc;
- (_Bool)isBaseFontNameUsed;
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;
- (const set_25e6ba53 *)mathMLAttributes;
- (id)initWithFirst:(id)arg1 second:(id)arg2 third:(id)arg3;

@end
