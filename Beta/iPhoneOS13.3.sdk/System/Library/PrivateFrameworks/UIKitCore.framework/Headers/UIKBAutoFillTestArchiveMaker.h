/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIKBAutoFillTestArchive, UIViewController;

__attribute__((visibility("hidden")))
@interface UIKBAutoFillTestArchiveMaker : NSObject

{
    UIKBAutoFillTestArchive *_testArchive;
    UIViewController *_viewControllerToSnapshot;
    long long _currentTableViewTag;
    long long _currentTextFieldTag;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)archiveMakerWithViewControllerToSnapshot:(id)arg1;

- (id)archiver:(id)arg1 willEncodeObject:(id)arg2;
- (id)initWithViewControllerToSnapshot:(id)arg1;
- (id)_cloneNavigationItem:(id)arg1;
- (id)_cloneViewHierarchyFromRootView:(id)arg1;
- (id)_cloneTextField:(id)arg1;
- (id)_cloneTextView:(id)arg1;
- (id)_cloneLabel:(id)arg1;
- (id)_cloneButton:(id)arg1;
- (id)_cloneGenericView:(id)arg1;
- (void)_applyPropertiesFromView:(id)arg1 toView:(id)arg2;
- (void)_applyPropertiesFromLabel:(id)arg1 toLabel:(id)arg2;
- (id)_makeCopyOfObject:(id)arg1;
- (id)_cloneTableView:(id)arg1;
- (id)_cloneView:(id)arg1;
- (id)_cloneBarButtonItem:(id)arg1;
- (id)makeArchive;

@end
