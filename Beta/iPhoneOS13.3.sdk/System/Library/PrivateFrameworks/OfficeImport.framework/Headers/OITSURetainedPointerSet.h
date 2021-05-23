/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OITSUPointerSet.h>

__attribute__((visibility("hidden")))
@interface OITSURetainedPointerSet : OITSUPointerSet

+ (Class)privateMutableClass;
+ (Class)privateNonMutableClass;

- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
- (id)allObjects;

@end
