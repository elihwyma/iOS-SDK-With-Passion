/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

@interface SYStateProvider : NSObject

{
    unsigned int _type;
    unsigned long long _handle;
    id _state;
    struct os_unfair_lock_s _lock;
    CDUnknownBlockType _encoder;
}

@property (copy, nonatomic) CDUnknownBlockType encoder;

+ (id)stateProviderWithName:(id)arg1 type:(unsigned int)arg2 typeName:(id)arg3;

- (id)init;
- (void)dealloc;
- (void)updateState:(id)arg1;
- (id)initWithName:(id)arg1 type:(unsigned int)arg2 typeName:(id)arg3;
- (id)_encodedState;

@end
