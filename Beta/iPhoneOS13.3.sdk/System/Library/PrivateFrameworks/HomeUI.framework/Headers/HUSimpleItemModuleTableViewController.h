/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableViewController.h>

@class NSArray, NSString;

@interface HUSimpleItemModuleTableViewController : HUItemTableViewController

{
    NSArray *_moduleControllers;
    CDUnknownBlockType _moduleControllerBuilder;
}

@property (nonatomic, readonly) NSArray *moduleControllers;
@property (copy, nonatomic) CDUnknownBlockType moduleControllerBuilder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (unsigned long long)updateMode;

- (void)viewDidLayoutSubviews;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)_updateTitle;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (id)buildItemModuleControllerForModule:(id)arg1;
- (id)initWithTableViewStyle:(long long)arg1 moduleCreator:(CDUnknownBlockType)arg2 moduleControllerBuilder:(CDUnknownBlockType)arg3;
- (void)dismissTextViewController;

@end
