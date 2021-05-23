/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@interface FxPlugGroup : NSObject

{
    struct FxPlugGroupPriv *_priv;
}

+ (id)fxPlugGroupWithDescriptor:(id)arg1;

- (void)dealloc;
- (unsigned int)count;
- (id)descriptor;
- (id)initWithDescriptor:(id)arg1;
- (void)addFxPlugDescriptor:(id)arg1;
- (id)fxPlugDescriptorAtIndex:(int)arg1;

@end
