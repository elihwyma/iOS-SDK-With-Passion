/*
 Image: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface AUExtensionInstanceProxy : NSObject

{
    struct AUv3InstanceBase *_auInstance;
}

@property (nonatomic) struct AUv3InstanceBase *auInstance;

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end
