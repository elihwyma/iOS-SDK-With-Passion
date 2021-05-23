/*
 Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

#import <Foundation/NSDictionary.h>

@interface NSDictionary (CalClassAdditions)

- (id)CalMutableRecursiveCopy;
- (id)mutableCopyWithElementsCopy;
- (_Bool)CalHasKeyIn:(id)arg1;
- (id)filteredDictionaryPassingTest:(CDUnknownBlockType)arg1;
- (id)CalDictionaryWithEmptyObjectsRemoved;

@end
