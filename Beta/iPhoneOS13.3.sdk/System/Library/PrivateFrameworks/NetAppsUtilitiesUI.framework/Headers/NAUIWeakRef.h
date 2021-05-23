/*
 Image: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI
 */

#import <Foundation/NSObject.h>

@interface NAUIWeakRef : NSObject

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
