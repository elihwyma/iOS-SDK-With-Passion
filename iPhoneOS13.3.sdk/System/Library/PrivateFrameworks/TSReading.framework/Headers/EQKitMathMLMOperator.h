//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/EQKitMathMLMToken.h>

#import <TSReading/EQKitLayoutSchemataOperator-Protocol.h>
#import <TSReading/EQKitOperator-Protocol.h>

@interface EQKitMathMLMOperator : EQKitMathMLMToken <EQKitOperator, EQKitLayoutSchemataOperator>
{
    unsigned short mOperatorId;
}

- (unsigned int)operatorUnicharOrNul;
- (id)schemataOperator;
- (id)operatorCore;
- (BOOL)isEmbellishedOperator;
- (unsigned short)operatorId;
- (struct Schemata)layoutSchemata;
- (const set_25e6ba53 )mathMLAttributes;
- (id)initFromXMLNode:(struct _xmlNode )arg1 parser:(id)arg2;
- (id)initWithString:(id)arg1 environment:(id)arg2;

@end
