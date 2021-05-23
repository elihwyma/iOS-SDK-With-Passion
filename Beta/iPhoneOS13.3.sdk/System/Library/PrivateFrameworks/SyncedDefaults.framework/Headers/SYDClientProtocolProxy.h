/*
 Image: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
 */

#import <Foundation/NSObject.h>

@protocol SYDClientProtocol;

__attribute__((visibility("hidden")))
@interface SYDClientProtocolProxy : NSObject

{
    id <SYDClientProtocol> _target;
}

@property (weak, nonatomic) id <SYDClientProtocol> target;

- (id)initWithTarget:(id)arg1;
- (void)storeDidChangeWithIdentifier:(id)arg1 type:(long long)arg2 changeDictionary:(id)arg3 reply:(CDUnknownBlockType)arg4;

@end
