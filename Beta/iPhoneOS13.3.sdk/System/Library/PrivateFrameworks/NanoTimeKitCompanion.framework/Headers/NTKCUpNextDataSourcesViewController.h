/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Preferences/PSListController.h>

@class NSString, NTKCUpNextDataSourcesManager;

@interface NTKCUpNextDataSourcesViewController : PSListController

{
    NTKCUpNextDataSourcesManager *_dataSourcesManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)specifiers;
- (void)_disabledDataSourcesDidChange;
- (void)dataSourcesSectionDidFinishLoading:(id)arg1;
- (void)manager:(id)arg1 didUpdateDataSourceEntries:(id)arg2;
- (void)dataSourcesSection:(id)arg1 didChangeDataSources:(id)arg2 forMode:(long long)arg3;
- (void)_setDataSourceEnabled:(id)arg1 withSpecifier:(id)arg2;
- (id)_dataSourceEnabled:(id)arg1;
- (void)_setAndResizeIconImage:(id)arg1 forSpecifier:(id)arg2;

@end
