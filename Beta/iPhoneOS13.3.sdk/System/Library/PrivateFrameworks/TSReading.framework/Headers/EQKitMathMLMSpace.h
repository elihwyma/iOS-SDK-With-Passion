/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/EQKitMathMLNode.h>

@class NSString;

@interface EQKitMathMLMSpace : EQKitMathMLNode

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (struct Schemata)layoutSchemata;
- (_Bool)isSpaceLike;
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;
- (const set_25e6ba53 *)mathMLAttributes;

@end
