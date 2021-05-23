/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface IMWeakReferenceCollection : NSObject

{
    NSMutableArray *_list;
}

- (id)init;
- (unsigned long long)count;
- (void)addObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (_Bool)containsObject:(id)arg1;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;

@end
