/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/EQKitMathMLMToken.h>

@class NSString;

@interface EQKitMathMLMOperator : EQKitMathMLMToken

{
    unsigned short mOperatorId;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (unsigned short)operatorId;
- (struct Schemata)layoutSchemata;
- (unsigned int)operatorUnicharOrNul;
- (_Bool)isEmbellishedOperator;
- (id)operatorCore;
- (id)initWithString:(id)arg1 environment:(id)arg2;
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;
- (const set_25e6ba53 *)mathMLAttributes;
- (id)schemataOperator;

@end
