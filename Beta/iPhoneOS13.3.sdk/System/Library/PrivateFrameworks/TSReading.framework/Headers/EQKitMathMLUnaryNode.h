/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/EQKitMathMLNode.h>

@interface EQKitMathMLUnaryNode : EQKitMathMLNode

{
    EQKitMathMLNode *mChild;
}

- (id)init;
- (void)dealloc;
- (id)initWithChildren:(id)arg1;
- (id)initWithChild:(id)arg1;
- (_Bool)isBaseFontNameUsed;
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;
- (const set_25e6ba53 *)mathMLAttributes;

@end
