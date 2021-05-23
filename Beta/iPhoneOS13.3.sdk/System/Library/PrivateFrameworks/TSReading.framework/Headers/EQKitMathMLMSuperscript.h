/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/EQKitMathMLBinaryNode.h>

@class NSString;

@interface EQKitMathMLMSuperscript : EQKitMathMLBinaryNode

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (struct Schemata)layoutSchemata;
- (_Bool)isEmbellishedOperator;
- (id)operatorCore;
- (id)schemataKernel;
- (id)schemataSubscript;
- (id)schemataSuperscript;

@end
