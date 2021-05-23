/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewCell.h>

#import <WorkflowUI/Swift-Protocol.h>

@class NSArray, NSString, UICollectionView;

@protocol WFActionDrawerAppsTableViewCellDelegate;

@interface WFActionDrawerAppsTableViewCell : UITableViewCell <Swift>

{
    NSArray *_appSections;
    id <WFActionDrawerAppsTableViewCellDelegate> _delegate;
    UICollectionView *_appsCollectionView;
    NSArray *_appItems;
}

@property (retain, nonatomic) UICollectionView *appsCollectionView;
@property (retain, nonatomic) NSArray *appItems;
@property (retain, nonatomic) NSArray *appSections;
@property (weak, nonatomic) id <WFActionDrawerAppsTableViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)configureWithActionDrawerSections:(id)arg1;

@end
