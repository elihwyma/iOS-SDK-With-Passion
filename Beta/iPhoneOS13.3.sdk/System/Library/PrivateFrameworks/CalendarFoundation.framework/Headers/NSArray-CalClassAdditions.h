/*
 Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

#import <Foundation/NSArray.h>

@interface NSArray (CalClassAdditions)

+ (id)arrayOfSetsBySplitting:(id)arg1 batchSize:(unsigned long long)arg2;

- (id)CalMutableRecursiveCopy;
- (id)_CalArrayOfValueForKeys:(id)arg1;
- (id)_CalStringForArrayOfValues:(id)arg1;
- (id)_CalArrayOfValueForKeyPaths:(id)arg1;
- (id)allObjectsWithClass:(Class)arg1;
- (_Bool)CalContainsObjectIdenticalTo:(id)arg1;
- (id)CalStringValueForKeys:(id)arg1;
- (id)CalStringValueForKeyPaths:(id)arg1;
- (id)CalStringValueForKeys:(id)arg1 keyPaths:(id)arg2;
- (id)filteredArrayUsingTest:(CDUnknownBlockType)arg1;

@end
