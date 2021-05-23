/*
 Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKVOToken : NSObject

{
    NSString *_keypath;
    long long _index;
    CDUnknownBlockType _block;
}

@property (copy, nonatomic, readonly) NSString *keypath;
@property (nonatomic, readonly) long long index;
@property (copy, nonatomic, readonly) CDUnknownBlockType block;
@property (nonatomic, readonly) void *context;

- (id)description;
- (id)initWithKeyPath:(id)arg1 index:(long long)arg2 block:(CDUnknownBlockType)arg3;

@end
