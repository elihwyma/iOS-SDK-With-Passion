//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, UIImage;

__attribute__((visibility("hidden")))
@interface _UIImageSystemImageVisualStyle : NSObject
{
    UIImage *_closeImage;
    UIImage *_cameraImage;
    UIImage *_actionsImage;
    UIImage *_checkmarkImage;
    UIImage *_strokedCheckmarkImage;
    NSCache *__systemImageCache;
}

+ (id)_iosVisualStyle;
+ (id)styleForThemeKey:(id)arg1;
+ (id)styleForConfiguration:(id)arg1;
@property(retain, nonatomic) NSCache *_systemImageCache; // @synthesize _systemImageCache=__systemImageCache;
// - (void).cxx_destruct;
@property(readonly, nonatomic) UIImage *systemTableViewCellDetailedDisclosureIndicatorImage;
@property(readonly, nonatomic) UIImage *systemTableViewCellDisclosureIndicatorImage;
@property(readonly, nonatomic) UIImage *strokedCheckmarkImage; // @synthesize strokedCheckmarkImage=_strokedCheckmarkImage;
@property(readonly, nonatomic) UIImage *checkmarkImage; // @synthesize checkmarkImage=_checkmarkImage;
@property(readonly, nonatomic) UIImage *actionsImage; // @synthesize actionsImage=_actionsImage;
@property(readonly, nonatomic) UIImage *cameraImage; // @synthesize cameraImage=_cameraImage;
@property(readonly, nonatomic) UIImage *closeImage; // @synthesize closeImage=_closeImage;
- (id)_removeImageWithColor:(id)arg1 name:(id)arg2;
- (id)removeImageWithColor:(id)arg1;
@property(readonly, nonatomic) UIImage *removeImage;
- (id)_addImageWithColor:(id)arg1 name:(id)arg2;
- (id)addImageWithColor:(id)arg1;
@property(readonly, nonatomic) UIImage *addImage;
- (id)_cachedSystemImageForType:(id)arg1 withColor:(id)arg2;
- (id)init;

@end

