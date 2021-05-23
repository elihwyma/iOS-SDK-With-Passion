/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

#import <Memories/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface KenBurnsInfo : NSObject <Swift>

{
    _Bool _allowEffect;
    _Bool _effectDisabled;
    float _outputAspectRatio;
    struct CGSize _playbackImageSize;
    struct CGRect _startFrame;
    struct CGRect _endFrame;
}

@property (nonatomic) _Bool allowEffect;
@property (nonatomic) _Bool effectDisabled;
@property (nonatomic) float outputAspectRatio;
@property (nonatomic) struct CGRect startFrame;
@property (nonatomic) struct CGRect endFrame;
@property (nonatomic) struct CGSize playbackImageSize;

+ (id)objectFromPlist:(id)arg1;
+ (id)defaultKBInfo;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)plistRepresentation;
- (struct CGRect)adjustRect:(struct CGRect)arg1 forRenderingIntent:(int)arg2 currentImageSize:(struct CGSize)arg3;
- (struct CATransform3D)transformForRect:(struct CGRect)arg1 toViewSize:(struct CGSize)arg2;
- (_Bool)updateKBInfoForNewPlaybackSize:(struct CGSize)arg1;
- (struct CGRect)startFrameForRenderingIntent:(int)arg1 currentImageSize:(struct CGSize)arg2;
- (struct CGRect)endFrameForRenderingIntent:(int)arg1 currentImageSize:(struct CGSize)arg2;
- (struct CATransform3D)startTransformToViewSize:(struct CGSize)arg1;
- (struct CATransform3D)endTransformToViewSize:(struct CGSize)arg1;

@end
