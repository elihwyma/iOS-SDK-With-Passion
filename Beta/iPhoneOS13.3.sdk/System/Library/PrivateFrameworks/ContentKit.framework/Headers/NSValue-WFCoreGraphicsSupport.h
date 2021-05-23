/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSValue.h>

@interface NSValue (WFCoreGraphicsSupport)

@property (nonatomic, readonly) struct CGPoint wf_CGPointValue;
@property (nonatomic, readonly) struct CGSize wf_CGSizeValue;
@property (nonatomic, readonly) struct CGAffineTransform wf_CGAffineTransformValue;

+ (id)wf_valueWithCGPoint:(struct CGPoint)arg1;
+ (id)wf_valueWithCGSize:(struct CGSize)arg1;
+ (id)wf_valueWithCGAffineTransform:(struct CGAffineTransform)arg1;

@end
