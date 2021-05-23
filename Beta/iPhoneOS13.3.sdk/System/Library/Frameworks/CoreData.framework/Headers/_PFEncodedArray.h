/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSArray.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface _PFEncodedArray : NSArray

{
    NSData *_sourceData;
    int _cd_rc;
    unsigned int _count;
}

+ (Class)classForKeyedUnarchiver;

- (id)init;
- (unsigned long long)retainCount;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (id)description;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (id)copy;
- (id)mutableCopy;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)arg1;
- (Class)classForCoder;
- (const id *)_values;
- (Class)classForArchiver;
- (void)_replaceObject:(id)arg1 atIndex:(unsigned long long)arg2;

@end
