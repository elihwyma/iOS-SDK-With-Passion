/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/Swift-Protocol.h>

@class NSString, PXNavigationListDataSectionManager, UIBarButtonItem, UINavigationController;

@protocol PXNavigationRoot <Swift>

@property (nonatomic, readonly) NSString *navigationTitle;
@property (nonatomic, readonly) NSString *navigationIdentifier;
@property (retain, nonatomic) UIBarButtonItem *navigationDisplayModeButtonItem;
@property (nonatomic, readonly) UINavigationController *navigationController;
@property (nonatomic, readonly) PXNavigationListDataSectionManager *navigationListDataSourceManager;

@end
