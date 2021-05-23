/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSLayoutXAxisAnchor.h>

@class NSArray, NSLayoutDimension;

@interface _NSCompositeLayoutXAxisAnchor : NSLayoutXAxisAnchor

{
    NSLayoutXAxisAnchor *_xAxisAnchor;
    double _constant;
    double _dimensionMultiplier;
    NSLayoutDimension *_dimension;
}

@property (readonly) NSArray *_childAnchors;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_expressionInContext:(CDStruct_1b4a36b4)arg1;
- (id)initWithAnchor:(id)arg1;
- (id)equationDescription;
- (long long)_directionAbstraction;
- (double)_valueInEngine:(id)arg1;
- (id)initWithAnchor:(id)arg1 plusDimension:(id)arg2 times:(double)arg3 plus:(double)arg4;

@end
