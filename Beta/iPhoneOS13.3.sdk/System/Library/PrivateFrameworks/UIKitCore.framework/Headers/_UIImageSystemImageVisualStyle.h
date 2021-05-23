/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

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

@property (retain, nonatomic) NSCache *_systemImageCache;
@property (nonatomic, readonly) UIImage *closeImage;
@property (nonatomic, readonly) UIImage *cameraImage;
@property (nonatomic, readonly) UIImage *actionsImage;
@property (nonatomic, readonly) UIImage *addImage;
@property (nonatomic, readonly) UIImage *removeImage;
@property (nonatomic, readonly) UIImage *checkmarkImage;
@property (nonatomic, readonly) UIImage *strokedCheckmarkImage;
@property (nonatomic, readonly) UIImage *systemTableViewCellDisclosureIndicatorImage;
@property (nonatomic, readonly) UIImage *systemTableViewCellDetailedDisclosureIndicatorImage;

+ (id)styleForConfiguration:(id)arg1;
+ (id)_iosVisualStyle;
+ (id)styleForThemeKey:(id)arg1;

- (id)init;
- (id)addImageWithColor:(id)arg1;
- (id)removeImageWithColor:(id)arg1;
- (id)_addImageWithColor:(id)arg1 name:(id)arg2;
- (id)_removeImageWithColor:(id)arg1 name:(id)arg2;
- (id)_cachedSystemImageForType:(id)arg1 withColor:(id)arg2;

@end
