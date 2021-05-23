/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _MFInvocationQOSOverride : NSObject

{
    struct pthread_override_s *_override;
    _Bool _lowPriority;
    unsigned int _desiredQoS;
    struct _opaque_pthread_t *_pthread;
}

@property (nonatomic, readonly, getter=isLowPriority) _Bool lowPriority;
@property (nonatomic, readonly) unsigned int desiredQoS;
@property (nonatomic, readonly) struct _opaque_pthread_t *pthread;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)removeOverride;
- (id)initWithPthread:(struct _opaque_pthread_t *)arg1 desiredQoS:(unsigned int)arg2 lowPriority:(_Bool)arg3;
- (void)applyOverrideWhileForeground:(_Bool)arg1;

@end
