/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <PhotoImaging/PIAdjustmentController.h>

@class NSDictionary, NSString;

@interface PIPortraitAdjustmentController : PIAdjustmentController

{
    long long _version;
}

@property (copy, nonatomic) NSDictionary *portraitInfo;
@property (copy, nonatomic) NSString *kind;
@property (nonatomic) long long version;
@property (nonatomic) double strength;

+ (id)strengthKey;
+ (id)kindKey;
+ (id)portraitInfoKey;

- (_Bool)canRenderPortraitEffect;
- (id)initWithAdjustment:(id)arg1;

@end
