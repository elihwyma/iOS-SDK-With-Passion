/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <ShareSheet/UIActivity.h>

@class _UISaveToCameraRollSaveItemsController;

@interface UISaveToCameraRollActivity : UIActivity

{
    long long _imageCount;
    long long _livePhotoCount;
    long long _videoCount;
    _UISaveToCameraRollSaveItemsController *_saveController;
}

@property (nonatomic) long long imageCount;
@property (nonatomic) long long livePhotoCount;
@property (nonatomic) long long videoCount;
@property (retain, nonatomic) _UISaveToCameraRollSaveItemsController *saveController;

+ (unsigned long long)_xpcAttributes;

- (id)activityType;
- (id)_systemImageName;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)_activityImage;
- (void)prepareWithActivityItems:(id)arg1;
- (CDUnknownBlockType)_backgroundPreheatBlock;
- (void)performActivity;

@end
