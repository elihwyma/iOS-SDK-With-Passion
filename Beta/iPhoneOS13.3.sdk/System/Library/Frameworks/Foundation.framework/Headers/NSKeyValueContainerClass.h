/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSKeyValueContainerClass : NSObject

{
    Class _originalClass;
    CDUnknownFunctionPointerType _cachedObservationInfoImplementation;
    CDUnknownFunctionPointerType _cachedSetObservationInfoImplementation;
    _Bool _cachedSetObservationInfoTakesAnObject;
    struct {
        Class _field1;
        Class _field2;
        struct __CFSet *_field3;
        struct __CFDictionary *_field4;
        struct _opaque_pthread_mutex_t _field5;
        _Bool _field6;
    } *_notifyingInfo;
}

- (id)description;
- (id)initWithOriginalClass:(Class)arg1;

@end
