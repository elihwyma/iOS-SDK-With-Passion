/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/EQKitMathMLBinaryNode.h>

@class NSString;

@interface EQKitMathMLMOver : EQKitMathMLBinaryNode

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (struct Schemata)layoutSchemata;
- (_Bool)isEmbellishedOperator;
- (id)operatorCore;
- (id)schemataBase;
- (id)schemataUnder;
- (id)schemataOver;
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;
- (const set_25e6ba53 *)mathMLAttributes;

@end
