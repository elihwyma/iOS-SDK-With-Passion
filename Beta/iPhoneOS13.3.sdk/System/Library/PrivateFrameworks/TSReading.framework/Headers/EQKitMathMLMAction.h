/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/EQKitMathMLNode.h>

@interface EQKitMathMLMAction : EQKitMathMLNode

{
    EQKitMathMLNode *mExpression;
}

- (void)dealloc;
- (struct Schemata)layoutSchemata;
- (_Bool)isEmbellishedOperator;
- (id)operatorCore;
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;
- (const set_25e6ba53 *)mathMLAttributes;

@end
