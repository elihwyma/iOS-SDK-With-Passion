/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSEnumerator.h>

@protocol NSFastEnumeration;

@interface __NSFastEnumerationEnumerator : NSEnumerator

{
    id <NSFastEnumeration> _obj;
    id _origObj;
    unsigned long long _index;
    unsigned long long _count;
    unsigned long long _mut;
    id _objects[16];
    CDStruct_58648341 _state;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;

- (void)dealloc;
- (id)nextObject;
- (id)initWithObject:(id)arg1;

@end
