/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <UIKit/UIViewController.h>

@class MPUDataSource, MPUQueryDataSource, NSString;

@protocol UIStateRestoring;

@interface MPUDataSourceViewController : UIViewController

{
    _Bool _hasEverReloadedData;
    _Bool _visible;
    _Bool _shouldReloadWhenVisible;
    MPUDataSource *_dataSource;
}

@property (nonatomic, getter=isVisible) _Bool visible;
@property (nonatomic) _Bool shouldReloadWhenVisible;
@property (retain, nonatomic) MPUDataSource *dataSource;
@property (nonatomic, readonly) MPUQueryDataSource *queryDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <UIStateRestoring> restorationParent;
@property (nonatomic, readonly) Class objectRestorationClass;

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;

- (void)dealloc;
- (id)initWithDataSource:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)reloadData;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)_setDataSource:(id)arg1 shouldReloadData:(_Bool)arg2;
- (void)dataSourceWillInvalidate;
- (void)dataSourceDidInvalidate;
- (void)_MPUStandardViewController_dataSourceWillInvalidateNotification:(id)arg1;
- (void)_MPUStandardViewController_dataSourceDidInvalidateNotification:(id)arg1;

@end
