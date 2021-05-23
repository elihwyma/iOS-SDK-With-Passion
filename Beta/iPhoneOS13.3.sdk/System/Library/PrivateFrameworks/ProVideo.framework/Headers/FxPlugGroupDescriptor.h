/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@interface FxPlugGroupDescriptor : NSObject

{
    struct FxPlugGroupDescriptorPriv *_priv;
}

+ (id)fxPlugGroupDescriptorWithUUID:(id)arg1 andDisplayName:(id)arg2;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)uuid;
- (id)displayName;
- (id)initWithUUID:(id)arg1 andDisplayName:(id)arg2;

@end
