/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@class NSLayoutXAxisAnchor, NSLayoutYAxisAnchor;

@interface NSLayoutPoint : NSObject <Swift>

{
    NSLayoutXAxisAnchor *_xAxisAnchor;
    NSLayoutYAxisAnchor *_yAxisAnchor;
}

@property (copy, readonly) NSLayoutXAxisAnchor *xAxisAnchor;
@property (copy, readonly) NSLayoutYAxisAnchor *yAxisAnchor;

+ (id)layoutPointWithXAxisAnchor:(id)arg1 yAxisAnchor:(id)arg2;
+ (id)pointWithXAxisAnchor:(id)arg1 yAxisAnchor:(id)arg2;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct CGPoint)valueInItem:(id)arg1;
- (id)initWithXAxisAnchor:(id)arg1 yAxisAnchor:(id)arg2;
- (id)layoutPointByOffsettingWithXOffset:(double)arg1 yOffset:(double)arg2;
- (id)layoutPointByOffsettingWithXOffsetDimension:(id)arg1 yOffsetDimension:(id)arg2;
- (id)constraintsEqualToLayoutPoint:(id)arg1;
- (id)pointByOffsettingWithXOffset:(double)arg1 yOffset:(double)arg2;
- (id)pointByOffsettingWithXOffsetDimension:(id)arg1 yOffsetDimension:(id)arg2;
- (id)constraintsEqualToPoint:(id)arg1;
- (id)ruleEqualToLayoutPoint:(id)arg1;

@end
