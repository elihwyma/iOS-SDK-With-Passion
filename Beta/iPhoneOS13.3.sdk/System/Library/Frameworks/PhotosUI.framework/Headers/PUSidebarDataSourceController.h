/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, PUSidebarDataSource, PXStackedDataSectionManager, PXStackedDataSource, PXStackedDataSourceManager;

@protocol PUSidebarDataSourceControllerDelegate;

@interface PUSidebarDataSourceController : NSObject

{
    PXStackedDataSectionManager *_dataSectionManager;
    PXStackedDataSourceManager *_dataSourceManager;
    PXStackedDataSource *_stackedDataSource;
    PUSidebarDataSource *_dataSource;
    id <PUSidebarDataSourceControllerDelegate> _delegate;
}

@property (nonatomic, readonly) PUSidebarDataSource *dataSource;
@property (weak, nonatomic) id <PUSidebarDataSourceControllerDelegate> delegate;
@property (copy, nonatomic) NSArray *childDataSectionManagers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)childDataSectionManagerForListItem:(id)arg1 hintIndexPath:(id)arg2 localIndex:(long long *)arg3;

@end
