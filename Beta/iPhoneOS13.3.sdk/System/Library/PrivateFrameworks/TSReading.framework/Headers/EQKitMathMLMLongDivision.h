/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/EQKitMathMLNode.h>

@class EQKitMathMLMStack, NSString;

@interface EQKitMathMLMLongDivision : EQKitMathMLNode

{
    EQKitMathMLNode *mDivisor;
    EQKitMathMLMStack *mStack;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (struct Schemata)layoutSchemata;
- (id)schemataDivisor;
- (id)schemataStack;
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;
- (const set_25e6ba53 *)mathMLAttributes;

@end
