/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUServiceGridViewController.h>

#import <HomeUI/Swift-Protocol.h>

@class NSString;

@interface HUPendingAccessoriesGridViewController : HUServiceGridViewController <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithUser:(id)arg1;
- (void)viewDidLoad;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (_Bool)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint)arg2;

@end
