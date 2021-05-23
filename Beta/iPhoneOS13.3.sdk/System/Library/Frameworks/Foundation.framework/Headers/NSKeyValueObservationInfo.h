/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface NSKeyValueObservationInfo : NSObject

{
    NSArray *_observances;
    unsigned long long _cachedHash;
    _Bool _cachedIsShareable;
}

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)_copyByAddingObservance:(id)arg1;
- (id)_initWithObservances:(id *)arg1 count:(unsigned long long)arg2 hashValue:(unsigned long long)arg3;

@end
