/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/EQKitMathMLNode.h>

@class EQKitMathMLTokenContent, NSString;

@interface EQKitMathMLMText : EQKitMathMLNode

{
    EQKitMathMLTokenContent *mContent;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithContent:(id)arg1;
- (_Bool)isBaseFontNameUsed;
- (struct Schemata)layoutSchemata;
- (_Bool)schemataIsQuoted;
- (id)schemataChildren;
- (int)scriptContext;
- (int)scriptVariant;
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;
- (const set_25e6ba53 *)mathMLAttributes;

@end
