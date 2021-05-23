/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class EQKitEnvironment, NSData;

@protocol EQKitExpression;

@interface EQKitEquation : NSObject

{
    id <EQKitExpression> mRoot;
    NSData *mSource;
    EQKitEnvironment *mEnvironment;
}

@property (nonatomic, readonly) id <EQKitExpression> root;
@property (nonatomic, readonly) EQKitEnvironment *environment;

+ (id)equationWithData:(id)arg1 format:(int)arg2 environment:(id)arg3 error:(id *)arg4;
+ (int)formatFromData:(id)arg1;
+ (int)formatFromString:(id)arg1;
+ (id)equationWithString:(id)arg1 format:(int)arg2 environment:(id)arg3 error:(id *)arg4;
+ (id)equationWithString:(id)arg1 format:(int)arg2 error:(id *)arg3;
+ (id)equationWithXMLDoc:(struct _xmlDoc *)arg1 node:(struct _xmlNode *)arg2 environment:(id)arg3 error:(id *)arg4;
+ (id)equationSourceFromPDFDocument:(struct CGPDFDocument *)arg1;
+ (id)mathMLStringFromLaTeXString:(id)arg1 environment:(id)arg2 error:(id *)arg3;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithRoot:(id)arg1 source:(id)arg2;
- (id)newLayout;
- (id)pdfDataWithLayout:(id)arg1 layoutContext:(id)arg2;
- (_Bool)isBaseFontNameUsed;
- (_Bool)exportToXMLWriter:(struct _xmlTextWriter *)arg1 ns:(const char *)arg2 prefix:(const char *)arg3 characterCount:(int *)arg4;
- (id)pdfDataWithLayoutContext:(id)arg1 baselineOffset:(double *)arg2;

@end
