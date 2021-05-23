/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _PFWeakReference : NSObject

{
    id _object;
    long long _objectAddress;
}

@property (readonly) id object;
@property (readonly) long long address;

+ (id)weakReferenceWithObject:(id)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithObject:(id)arg1;
- (id)retainedObject;

@end
