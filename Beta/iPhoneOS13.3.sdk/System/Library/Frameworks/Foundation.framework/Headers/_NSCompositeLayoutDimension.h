/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSLayoutDimension.h>

@class NSArray;

@interface _NSCompositeLayoutDimension : NSLayoutDimension

{
    NSLayoutDimension *_firstLayoutDimension;
    double _secondLayoutDimensionMultiplier;
    NSLayoutDimension *_secondLayoutDimension;
}

@property (readonly) NSArray *_childAnchors;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_expressionInContext:(CDStruct_1b4a36b4)arg1;
- (id)initWithAnchor:(id)arg1;
- (id)equationDescription;
- (double)_valueInEngine:(id)arg1;
- (id)initWithDimension:(id)arg1 plusDimension:(id)arg2 times:(double)arg3;
- (id)initWithDimension:(id)arg1 plusDimension:(id)arg2;

@end
