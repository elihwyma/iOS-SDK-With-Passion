/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/_PFString.h>

__attribute__((visibility("hidden")))
@interface _PFEncodedString : _PFString

+ (Class)classForKeyedUnarchiver;

- (id)init;
- (unsigned long long)retainCount;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (Class)classForCoder;
- (Class)classForArchiver;

@end
