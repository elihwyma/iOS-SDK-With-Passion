/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <PhotoImaging/PIAdjustmentController.h>

@class NSString;

@interface PIEffectAdjustmentController : PIAdjustmentController

@property (copy, nonatomic) NSString *kind;
@property (nonatomic) long long version;
@property (nonatomic) double intensity;

+ (id)versionKey;
+ (id)intensityKey;
+ (id)kindKey;

- (_Bool)isSettingEqual:(id)arg1 forKey:(id)arg2;

@end
