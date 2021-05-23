/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSMutableSet.h>

#import <Foundation/Swift-Protocol.h>

@interface NSSetChanges : NSMutableSet <Swift>

@property (readonly) unsigned long long changeCount;

+ (id)allocWithZone:(struct _NSZone *)arg1;

- (void)addObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (_Bool)_isToManyChangeInformation;
- (void)enumerateChangesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateChanges:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)addChange:(id)arg1;
- (long long)_toManyPropertyType;
- (void)applyChangesToSet:(id)arg1;

@end
