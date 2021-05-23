/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface _PFFreeMapEntry : NSObject

{
    int _retainCount;
    NSMutableSet *_owners;
}

- (id)init;
- (void)dealloc;
- (_Bool)decrement;
- (void)addOwner:(id)arg1;
- (void)removeOwner:(id)arg1;
- (void)removeAllOwners;

@end
