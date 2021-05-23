/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSArray.h>

@class AXEventPathInfoRepresentation;

@interface NSArray (AXEventPathInfoRepresentationExtension)

@property (nonatomic, readonly) AXEventPathInfoRepresentation *firstPath;

+ (id)axArrayWithPossiblyNilArrays:(unsigned long long)arg1;
+ (id)axArrayByIgnoringNilElementsWithCount:(unsigned long long)arg1;

- (id)axMapObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)axUniqueArrayWithPredicate:(CDUnknownBlockType)arg1;
- (_Bool)axIsEqualToOrderedArray:(id)arg1 withPredicate:(CDUnknownBlockType)arg2;
- (id)axFilterObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)axSafeObjectAtIndex:(unsigned long long)arg1;

@end
