/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSKnownKeysDictionary;

__attribute__((visibility("hidden")))
@interface _PFTempNestedSnapshot : NSObject

{
    NSKnownKeysDictionary *_snapshot;
    unsigned long long _version;
}

- (void)dealloc;
- (id)valueForKey:(id)arg1;
- (const id *)knownKeyValuesPointer;
- (id)_snapshot_;
- (unsigned int)_versionNumber;
- (id)initWithOwnedKKsD:(id)arg1 andVersion:(unsigned long long)arg2;

@end
