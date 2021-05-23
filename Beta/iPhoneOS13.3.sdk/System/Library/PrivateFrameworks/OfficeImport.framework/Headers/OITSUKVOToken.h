/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OITSUKVOToken : NSObject

{
    NSObject *_observer;
    NSObject *_target;
    NSString *_keyPath;
    void *_context;
}

@property (nonatomic, readonly) NSObject *observer;
@property (nonatomic, readonly) NSObject *target;
@property (copy, nonatomic, readonly) NSString *keyPath;
@property (nonatomic, readonly) void *context;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithObserver:(id)arg1 target:(id)arg2 keyPath:(id)arg3 context:(void *)arg4;

@end
