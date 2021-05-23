/*
 Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

#import <CoreML/MLMultiArray.h>

@interface MLMultiArray (Typed)

- (double *)doublePointer;
- (id)initForFloat32TypeWithShape:(id)arg1;
- (id)initForDoubleTypeWithShape:(id)arg1;
- (float *)floatPointer;

@end
