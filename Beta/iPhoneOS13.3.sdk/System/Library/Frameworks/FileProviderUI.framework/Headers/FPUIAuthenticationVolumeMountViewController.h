/*
 Image: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
 */

#import <FileProviderUI/FPUIAuthenticationTableViewController.h>

@class NSArray, NSMutableIndexSet;

@interface FPUIAuthenticationVolumeMountViewController : FPUIAuthenticationTableViewController

{
    NSArray *_allVolumeRepresentations;
    NSArray *_mountedVolumeIdentifiers;
    NSMutableIndexSet *_selectedVolumesIndexes;
}

- (void)viewDidLoad;
- (void)_done:(id)arg1;
- (id)tableCellCheckmarkImageDisabled;
- (_Bool)_canMoveToNextStep;
- (void)selectedVolumesIndexesDidChange;
- (id)initWithVolumes:(id)arg1 mountedVolumeIdentifiers:(id)arg2;
- (id)defaultRightBarButtonItem;
- (void)setupTableViewSections;

@end
