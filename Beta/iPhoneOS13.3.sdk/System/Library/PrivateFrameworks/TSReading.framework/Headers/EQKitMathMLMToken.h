/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/EQKitMathMLNode.h>

#import <TSReading/Swift-Protocol.h>

@class EQKitMathMLTokenContent, NSString;

@interface EQKitMathMLMToken : EQKitMathMLNode <Swift>

{
    struct {
        unsigned int mType:2;
    } mFlags;
    union {
        unsigned int mChar;
        NSString *mString;
        EQKitMathMLTokenContent *mContent;
    } mContent;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)isNumber;
- (id)initWithContent:(id)arg1;
- (id)schemataTokenString;
- (unsigned int)schemataUnicharOrNul;
- (id)initWithString:(id)arg1 environment:(id)arg2;
- (int)scriptContext;
- (int)scriptVariant;
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;
- (const set_25e6ba53 *)mathMLAttributes;
- (id)schemataFontStyling;
- (id)fontStyling;

@end
