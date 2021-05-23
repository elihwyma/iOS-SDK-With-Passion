/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <TouchML/Swift-Protocol.h>

@class NSString, TMLRect;

@protocol UIImageJSExports <Swift>

@property (nonatomic, readonly) TMLRect *bounds;
@property (nonatomic, readonly) double aspectRatio;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) double width;
@property (copy, nonatomic) NSString *accessibilityLabel;
@property (copy, nonatomic) NSString *accessibilityHint;
@property (copy, nonatomic) NSString *accessibilityValue;
@property (nonatomic) unsigned long long accessibilityTraits;
@property (retain, nonatomic) NSString *accessibilityLanguage;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) id CGImageRef;

- (unsigned short)withRenderingMode: /* Error: Ran out of types for this method. */;
- (unsigned short)colorPattern;
- (unsigned short)resizableImage:: /* Error: Ran out of types for this method. */;
- (unsigned short)cropImageToRect: /* Error: Ran out of types for this method. */;

@end
