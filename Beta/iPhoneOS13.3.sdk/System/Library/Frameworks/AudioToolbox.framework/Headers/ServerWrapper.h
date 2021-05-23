/*
 Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

#import <Foundation/NSObject.h>

@class HapticServerInstance;

__attribute__((visibility("hidden")))
@interface ServerWrapper : NSObject

{
    HapticServerInstance *_serverInstance;
}

@property (weak, readonly) HapticServerInstance *serverInstance;

- (_Bool)contains:(id)arg1;
- (id)initWithServerInstance:(id)arg1;

@end
