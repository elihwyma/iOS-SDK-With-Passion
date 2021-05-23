/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <Foundation/NSObject.h>

@class CIBurstImageSetInternal;

@interface CIBurstImageSet : NSObject

{
    CIBurstImageSetInternal *_priv;
}

+ (id)defaultVersionString;
+ (id)burstImageSet;
+ (id)burstImageSetWithOptions:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithOptions:(id)arg1;
- (id)burstId;
- (void)addImageFromIOSurface:(struct __IOSurface *)arg1 properties:(id)arg2 identifier:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (double)secondsSinceStart;
- (id)bestImageIdentifiers;
- (id)allImageIdentifiers;
- (id)statsForImageWithIdentifier:(id)arg1;
- (_Bool)isAction;
- (_Bool)isPortrait;
- (id)imageClusterForIdentifier:(id)arg1;
- (id)coverImageIdentifier;
- (unsigned long long)imageClusterCount;
- (id)imageClusterForIndex:(unsigned long long)arg1;
- (void)setLoggingListener:(void *)arg1 withUserInfo:(void *)arg2;

@end
