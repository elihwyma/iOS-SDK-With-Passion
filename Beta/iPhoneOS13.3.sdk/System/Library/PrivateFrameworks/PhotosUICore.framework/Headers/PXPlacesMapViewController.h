/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PKExtendedTraitCollection, PXPlacesMapController;

@interface PXPlacesMapViewController : UIViewController <Swift>

{
    PXPlacesMapController *_mapController;
}

@property (retain, nonatomic) PXPlacesMapController *mapController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) PKExtendedTraitCollection *pk_extendedTraitCollection;

- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)_commonInit;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)sendTraitNotification;

@end
