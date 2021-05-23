/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@interface FxPlugDescriptor : NSObject

{
    struct FxPlugDescriptorPriv *_priv;
}

+ (id)fxPlugDescriptorWithPROPlugIn:(void *)arg1;
+ (id)fxPlugDescriptorWithFxMetaPlug:(id)arg1;

- (void)dealloc;
- (id)version;
- (id)uuid;
- (id)displayName;
- (id)properties;
- (id)flavor;
- (Class)plugInClass;
- (id)initWithPROPlugIn:(void *)arg1;
- (id)initWithFxMetaPlug:(id)arg1;
- (id)metaPlug;
- (id)groupDescriptor;
- (_Bool)canDoGPU;
- (_Bool)requiresCoreImage;
- (id)plugInTypeUUID;

@end
