/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@interface TIHandwritingStrokes : NSObject

{
    struct vector<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint>>, std::__1::allocator<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint>>>> _strokes;
    _Bool _continuePreviousStroke;
}

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id).cxx_construct;
- (void)addPoint:(struct CGPoint)arg1;
- (void)endStroke;
- (void)removeAllStrokes;
- (unsigned long long)numberOfStrokes;
- (void)removeStrokeAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfPointsInStrokeAtIndex:(unsigned long long)arg1;
- (struct CGPoint)pointAtIndex:(unsigned long long)arg1 inStrokeAtIndex:(unsigned long long)arg2;
- (unsigned long long)totalNumberOfPoints;

@end
