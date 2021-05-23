/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/EQKitMathMLNode.h>

@class NSArray, NSString;

@interface EQKitMathMLMStackRow : EQKitMathMLNode

{
    NSArray *mChildren;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithChildren:(id)arg1;
- (_Bool)isBaseFontNameUsed;
- (struct Schemata)layoutSchemata;
- (id)schemataChildren;
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;
- (const set_25e6ba53 *)mathMLAttributes;

@end
