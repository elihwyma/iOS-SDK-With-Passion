/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@interface PVMultiBlendLayerParams : NSObject

{
    float _opacity;
    int _mode;
}

@property (nonatomic, readonly) int hgBlendMode;
@property (nonatomic) float opacity;
@property (nonatomic) int mode;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOpacity:(float)arg1 mode:(int)arg2;
- (void)_sharedInitWithOpacity:(float)arg1 mode:(int)arg2;
- (id)blendModeName;

@end
