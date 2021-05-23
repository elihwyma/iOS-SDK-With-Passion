/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@protocol VUIMediaLibraryApplicationControllerDelegate;

@interface VUIMediaLibraryApplicationController : NSObject

{
    id <VUIMediaLibraryApplicationControllerDelegate> _delegate;
}

@property (retain, nonatomic) id <VUIMediaLibraryApplicationControllerDelegate> delegate;

+ (id)defaultController;

- (id)settingsURL;
- (_Bool)isCellularDataForPlaybackEnabled;
- (_Bool)shouldWarnAboutPlaybackQualityForRentalMediaItem:(id)arg1;
- (void)clearCellularPlaybackQualityOverrides;
- (void)overrideCellularPlaybackQuality:(unsigned long long)arg1 forMediaItem:(id)arg2;
- (unsigned long long)assetTypeForRentalMediaItem:(id)arg1;
- (void)removeRentalMediaItem:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end
