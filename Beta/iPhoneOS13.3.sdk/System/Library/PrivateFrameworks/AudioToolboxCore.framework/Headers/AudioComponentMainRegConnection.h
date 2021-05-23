/*
 Image: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface AudioComponentMainRegConnection : NSObject

{
    struct AudioComponentRegistrarImpl *mImpl;
    struct ConnectionInfo mConnInfo;
}

- (id).cxx_construct;
- (void)getComponentList:(id)arg1 linkedSDKVersion:(int)arg2 includeExtensions:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;
- (void)canRegisterComponent:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)initWithRegistrar:(struct AudioComponentRegistrarImpl *)arg1 connection:(id)arg2;

@end
