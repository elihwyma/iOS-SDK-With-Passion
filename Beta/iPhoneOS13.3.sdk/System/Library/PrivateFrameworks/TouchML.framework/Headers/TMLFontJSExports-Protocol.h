/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <TouchML/Swift-Protocol.h>

@class NSString;

@protocol TMLFontJSExports <Swift>

@property (nonatomic, readonly) struct CGFont *CGFontRef;
@property (nonatomic, readonly) NSString *familyName;
@property (nonatomic, readonly) NSString *fontName;
@property (nonatomic, readonly) double pointSize;
@property (nonatomic, readonly) double ascender;
@property (nonatomic, readonly) double descender;
@property (nonatomic, readonly) double capHeight;
@property (nonatomic, readonly) double xHeight;
@property (nonatomic, readonly) double lineHeight;
@property (nonatomic, readonly) double leading;

- (unsigned short)bold;
- (unsigned short)italic;
- (unsigned short)withWidth: /* Error: Ran out of types for this method. */;
- (unsigned short)withSize: /* Error: Ran out of types for this method. */;
- (unsigned short)withFamily: /* Error: Ran out of types for this method. */;
- (unsigned short)withWeight: /* Error: Ran out of types for this method. */;
- (unsigned short)withSymbolicTraits: /* Error: Ran out of types for this method. */;
- (unsigned short)withAttributes: /* Error: Ran out of types for this method. */;
- (unsigned short)withStyle: /* Error: Ran out of types for this method. */;
- (unsigned short)withAXRestrictedStyle: /* Error: Ran out of types for this method. */;
- (unsigned short)withScale: /* Error: Ran out of types for this method. */;
- (unsigned short)withScaleTransform: /* Error: Ran out of types for this method. */;

@end
