/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSLayoutDimension.h>

@class NSArray;

@interface _NSArithmeticLayoutDimension : NSLayoutDimension

{
    NSLayoutDimension *_rootLayoutDimension;
    double _multiplier;
    double _constant;
}

@property (readonly) NSArray *_childAnchors;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_nearestAncestorLayoutItem;
- (id)_expressionInContext:(CDStruct_1b4a36b4)arg1;
- (id)initWithAnchor:(id)arg1;
- (id)equationDescription;
- (double)_valueInEngine:(id)arg1;
- (id)initWithMultiplier:(double)arg1 dimension:(id)arg2 constant:(double)arg3;

@end
