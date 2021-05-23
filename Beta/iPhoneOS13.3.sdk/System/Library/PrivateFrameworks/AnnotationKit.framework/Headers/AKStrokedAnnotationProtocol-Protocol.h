/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <AnnotationKit/Swift-Protocol.h>

@class UIColor;

@protocol AKStrokedAnnotationProtocol <Swift>

@property double strokeWidth;
@property (retain) UIColor *strokeColor;
@property (getter=isDashed) _Bool dashed;
@property long long brushStyle;
@property _Bool hasShadow;

@end
