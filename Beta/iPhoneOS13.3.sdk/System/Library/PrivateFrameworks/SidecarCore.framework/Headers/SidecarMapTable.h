/*
 Image: /System/Library/PrivateFrameworks/SidecarCore.framework/SidecarCore
 */

#import <Foundation/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface SidecarMapTable : NSObject

{
    long long _keyMask;
    NSMapTable *_keys2values;
    NSMapTable *_values2keys;
}

- (id)initWithKeyMask:(long long)arg1 weakObjects:(_Bool)arg2;

@end
