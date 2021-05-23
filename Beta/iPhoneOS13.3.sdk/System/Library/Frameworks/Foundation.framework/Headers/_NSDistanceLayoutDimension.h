/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSLayoutDimension.h>

@class NSArray, NSLayoutAnchor;

@interface _NSDistanceLayoutDimension : NSLayoutDimension

{
    NSLayoutAnchor *_minuend;
    NSLayoutAnchor *_subtrahend;
}

@property (readonly) NSArray *_childAnchors;

+ (id)distanceFromAnchor:(id)arg1 toAnchor:(id)arg2;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_expressionInContext:(CDStruct_1b4a36b4)arg1;
- (id)initWithAnchor:(id)arg1;
- (id)equationDescription;
- (double)_valueInEngine:(id)arg1;
- (id)initWithMinuend:(id)arg1 subtrahend:(id)arg2;

@end
