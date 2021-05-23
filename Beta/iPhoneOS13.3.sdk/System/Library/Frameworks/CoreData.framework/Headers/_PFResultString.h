/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/_PFString.h>

__attribute__((visibility("hidden")))
@interface _PFResultString : _PFString

{
    id _parentObject;
}

+ (unsigned long long)bufferOffset;

- (unsigned long long)retainCount;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (const char *)UTF8String;
- (void)setParentObject:(id)arg1;

@end
