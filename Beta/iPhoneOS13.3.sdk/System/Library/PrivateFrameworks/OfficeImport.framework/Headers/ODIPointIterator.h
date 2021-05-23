/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface ODIPointIterator : NSObject

+ (id)pointsForSpecification:(id)arg1 startingPoint:(id)arg2 isLast:(_Bool)arg3;
+ (id)processAttributes:(id)arg1 startingPoint:(id)arg2 isLast:(_Bool)arg3;
+ (void)processSelfAxisFromPoint:(id)arg1 state:(struct ODIPointIteratorState *)arg2;
+ (void)processChildAxisFromPoint:(id)arg1 state:(struct ODIPointIteratorState *)arg2;
+ (void)processFollowingSiblingAxisFromPoint:(id)arg1 state:(struct ODIPointIteratorState *)arg2;
+ (_Bool)isDoneForState:(struct ODIPointIteratorState *)arg1;
+ (_Bool)isPoint:(id)arg1 ofType:(int)arg2;
+ (_Bool)addPoint:(id)arg1 state:(struct ODIPointIteratorState *)arg2;

@end
