/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/EQKitMathMLNode.h>

@class NSArray, NSString;

@interface EQKitMathMLMTr : EQKitMathMLNode

{
    NSArray *mChildren;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)initWithChildren:(id)arg1;
- (_Bool)isBaseFontNameUsed;
- (struct Schemata)layoutSchemata;
- (id)schemataChildren;
- (id)layoutStyleNode;
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;
- (const set_25e6ba53 *)mathMLAttributes;
- (id)initWithChildren:(id)arg1 node:(struct _xmlNode *)arg2;

@end
