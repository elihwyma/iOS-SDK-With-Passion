/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface RCWeakRef : NSObject

{
    id _weakStorage;
    id _weakPointer;
    _Bool _useWeakStorage;
}

+ (id)weakRefWithObject:(id)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)object;

@end
