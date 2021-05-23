/*
 Image: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface AudioComponentPrefRegConnection : NSObject

{
    struct AudioComponentRegistrarImpl *mImpl;
    struct ConnectionInfo mConnInfo;
}

- (id).cxx_construct;
- (void)setExtensionComponentList:(id)arg1 linkedSDKVersion:(int)arg2 components:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)getExtensionComponentList:(id)arg1 linkedSDKVersion:(int)arg2 reply:(CDUnknownBlockType)arg3;
- (void)getComponentUserTags:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setComponentUserTags:(id)arg1 tags:(id)arg2;
- (void)getExtensionIcon:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getInterAppIcon:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)initWithRegistrar:(struct AudioComponentRegistrarImpl *)arg1 connection:(id)arg2;

@end
