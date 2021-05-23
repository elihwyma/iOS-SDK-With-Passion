/*
 Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <Foundation/NSArray.h>

@interface NSArray (FezAdditions)

- (_Bool)containsObjectIdenticalTo:(id)arg1;
- (id)__imArrayByApplyingBlock:(CDUnknownBlockType)arg1;
- (long long)indexOfObject:(id)arg1 matchingComparison:(SEL)arg2;
- (_Bool)__imIsMutable;
- (id)__IMStripPotentialTokenURIs;
- (id)__imSetFromArray;
- (id)__imDeepCopy;
- (_Bool)_hasSameMembers:(id)arg1;
- (id)_copyForEnumerating;
- (id)__imFirstObject;
- (_Bool)containsObject:(id)arg1 matchingComparison:(SEL)arg2;
- (void)__imForEach:(CDUnknownBlockType)arg1;
- (id)__imArrayByFilteringWithBlock:(CDUnknownBlockType)arg1;
- (id)__imArrayByApplyingBlock:(CDUnknownBlockType)arg1 filter:(CDUnknownBlockType)arg2;
- (void)differencesFromArray:(id)arg1 usingComparator:(CDUnknownBlockType)arg2 removedIndexes:(id *)arg3 insertedIndexes:(id *)arg4;
- (void)differencesFromArray:(id)arg1 removedIndexes:(id *)arg2 insertedIndexes:(id *)arg3;

@end
