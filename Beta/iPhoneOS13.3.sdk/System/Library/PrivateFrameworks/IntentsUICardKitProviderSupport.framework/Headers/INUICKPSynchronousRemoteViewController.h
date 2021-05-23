/*
 Image: /System/Library/PrivateFrameworks/IntentsUICardKitProviderSupport.framework/IntentsUICardKitProviderSupport
 */

#import <UIKit/UIViewController.h>

@class INUIRemoteViewController, NSSet, NSString;

@protocol CRKCardSectionViewControllingDelegate, INUICKPInterfaceSectionOrganizing, INUICKPSynchronousRemoteViewControllerDelegate;

@interface INUICKPSynchronousRemoteViewController : UIViewController

{
    id <CRKCardSectionViewControllingDelegate> cardSectionViewControllingDelegate;
    INUIRemoteViewController *_remoteViewController;
    id <INUICKPInterfaceSectionOrganizing> _interfaceSectionOrganizer;
    id <INUICKPSynchronousRemoteViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <INUICKPSynchronousRemoteViewControllerDelegate> delegate;
@property (retain, nonatomic) INUIRemoteViewController *remoteViewController;
@property (weak, nonatomic) id <INUICKPInterfaceSectionOrganizing> interfaceSectionOrganizer;
@property (copy, nonatomic, readonly) NSSet *cachedRepresentedParameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <CRKCardSectionViewControllingDelegate> cardSectionViewControllingDelegate;

+ (void)requestInstanceWithInfo:(id)arg1 configuration:(id)arg2 synchronousRemoteViewControllerDelegate:(id)arg3 reply:(CDUnknownBlockType)arg4;

- (void)loadView;
- (struct CGSize)preferredContentSize;
- (_Bool)_canShowWhileLocked;
- (id)_interaction;
- (id)interfaceSectionsForRemoteViewController:(id)arg1;
- (id)maximumSizesBySystemVersionForRemoteViewController:(id)arg1;
- (id)minimumSizesBySystemVersionForRemoteViewController:(id)arg1;
- (void)remoteViewControllerServiceDidTerminate:(id)arg1;
- (id)_minimumSizesBySystemVersion;
- (struct CGSize)cachedSizeForSynchronousRemoteView:(id)arg1;

@end
