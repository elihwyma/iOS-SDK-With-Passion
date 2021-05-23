/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <Foundation/NSObject.h>

@class AVTAvatarPoseAnimation, AVTStickerCamera, NSArray, NSDictionary, NSString;

@interface AVTStickerConfiguration : NSObject

{
    _Bool _preRendered;
    _Bool _hasLoadedFromConfiguration;
    float _rate;
    float _scale;
    NSString *_name;
    NSString *_localizedName;
    AVTAvatarPoseAnimation *_poseAnimation;
    NSArray *_props;
    NSArray *_shaderModifiers;
    AVTStickerCamera *_camera;
    double _snapshotFrame;
    double _duration;
    NSArray *_morpherOverrides;
    NSArray *_presetOverrides;
    unsigned long long _stickerVersion;
    NSDictionary *_configurationDictionary;
    NSString *_assetsPath;
    struct CGSize _size;
}

@property (retain, nonatomic) NSDictionary *configurationDictionary;
@property (retain, nonatomic) NSString *assetsPath;
@property (nonatomic) _Bool hasLoadedFromConfiguration;
@property (retain, nonatomic) AVTAvatarPoseAnimation *poseAnimation;
@property (retain, nonatomic) NSArray *props;
@property (retain, nonatomic) NSArray *shaderModifiers;
@property (retain, nonatomic) AVTStickerCamera *camera;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSString *emojiRepresentation;
@property (nonatomic, readonly) _Bool preRendered;
@property (nonatomic, readonly) double snapshotFrame;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) float rate;
@property (nonatomic, readonly) float scale;
@property (nonatomic, readonly) NSArray *morpherOverrides;
@property (nonatomic, readonly) NSArray *presetOverrides;
@property (nonatomic, readonly) unsigned long long stickerVersion;

+ (id)stickerConfigurationsForAnimojiNamed:(id)arg1 inStickerPack:(id)arg2;
+ (id)stickerConfigurationsForMemojiInStickerPack:(id)arg1;
+ (id)stickerConfigurationsForMemoji;
+ (id)stickerConfigurationsForAnimojiNamed:(id)arg1;
+ (id)unavailableAnimojiNamesForStickerPack:(id)arg1;
+ (id)stickerConfigurationsForPuppetNamed:(id)arg1;

- (void)unload;
- (id)initWithName:(id)arg1 poseAnimation:(id)arg2 props:(id)arg3 shaders:(id)arg4 camera:(id)arg5 options:(id)arg6;
- (void)loadIfNeeded;
- (id)initWithConfigurationAtPath:(id)arg1;
- (id)initWithConfigDictionary:(id)arg1 assetsPath:(id)arg2;
- (void)setupOptions:(id)arg1;

@end
