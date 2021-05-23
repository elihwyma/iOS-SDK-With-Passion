/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIViewController.h>

@class MPMediaPickerConfiguration, NSString;

@protocol MPMediaPickerControllerDelegate, MPMediaPickerRemoteViewLoader;

@interface MPMediaPickerController : UIViewController

{
    MPMediaPickerConfiguration *_configuration;
    id <MPMediaPickerControllerDelegate> _delegate;
    id <MPMediaPickerRemoteViewLoader> _loader;
}

@property (retain, nonatomic) id <MPMediaPickerRemoteViewLoader> loader;
@property (nonatomic, readonly) unsigned long long mediaTypes;
@property (weak, nonatomic) id <MPMediaPickerControllerDelegate> delegate;
@property (nonatomic) _Bool allowsPickingMultipleItems;
@property (nonatomic) _Bool showsCloudItems;
@property (nonatomic) _Bool showsItemsWithProtectedAssets;
@property (copy, nonatomic) NSString *prompt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)load;
+ (_Bool)useNewPicker;
+ (void)preheatMediaPicker;

- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)configuration;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)willMoveToParentViewController:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)modalPresentationStyle;
- (long long)preferredInterfaceOrientationForPresentation;
- (long long)_preferredModalPresentationStyle;
- (void)_pickerDidCancel;
- (long long)selectionMode;
- (void)remoteMediaPickerDidCancel;
- (void)remoteMediaPickerDidPickMediaItems:(id)arg1;
- (void)remoteMediaPickerDidPickPlaybackArchive:(id)arg1;
- (void)_sharedInit;
- (id)initWithMediaTypes:(unsigned long long)arg1;
- (id)initWithSupportedTypeIdentifiers:(id)arg1 selectionMode:(long long)arg2;
- (_Bool)picksSingleCollectionEntity;
- (void)setPicksSingleCollectionEntity:(_Bool)arg1;
- (unsigned int)watchCompatibilityVersion;
- (void)setWatchCompatibilityVersion:(unsigned int)arg1;
- (id)typeIdentifiers;
- (_Bool)showsCatalogContent;
- (void)setShowsCatalogContent:(_Bool)arg1;
- (_Bool)showsLibraryContent;
- (void)setShowsLibraryContent:(_Bool)arg1;
- (_Bool)supportsUnavailableContent;
- (void)setSupportsUnavailableContent:(_Bool)arg1;
- (_Bool)pickingForExternalPlayer;
- (void)setPickingForExternalPlayer:(_Bool)arg1;
- (id)playbackArchiveConfiguration;
- (void)setPlaybackArchiveConfiguration:(id)arg1;
- (void)_forceDismissal;
- (void)_pickerDidPickItems:(id)arg1;
- (void)_pickerDidPickPlaybackArchive:(id)arg1;
- (_Bool)_hasAddedRemoteView;
- (void)_addRemoteView;
- (void)_resetRemoteViewController;
- (void)_synchronizeSettings;
- (void)_checkLibraryAuthorization;
- (unsigned long long)_mediaPickerController_supportedInterfaceOrientations;
- (long long)_mediaPickerController_preferredInterfaceOrientationForPresentation;
- (unsigned long long)_keynote_supportedInterfaceOrientations;
- (long long)_keynote_preferredInterfaceOrientationForPresentation;

@end
