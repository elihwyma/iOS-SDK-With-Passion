/*
 Image: /System/Library/PrivateFrameworks/UITriggerVC.framework/UITriggerVC
 */

#import <UIKit/UITableViewController.h>

@class IDSService, NSMutableArray, NSMutableDictionary, NSString;

@interface UITriggerTableViewController : UITableViewController

{
    _Bool _loading;
    IDSService *_idsService;
    NSMutableArray *_sectionList;
    NSMutableDictionary *_sectionContents;
}

@property (retain, nonatomic) IDSService *idsService;
@property (nonatomic) _Bool loading;
@property (retain, nonatomic) NSMutableArray *sectionList;
@property (retain, nonatomic) NSMutableDictionary *sectionContents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
- (void)idsUIProvidersResponse:(id)arg1;
- (void)idsRequestUITriggerResponse:(id)arg1;
- (_Bool)requestPluginList;
- (id)sectionStringForIndexPath:(id)arg1;
- (id)tailStringForIndexPath:(id)arg1;
- (_Bool)triggerUIProvider:(id)arg1;
- (void)_extractSections:(id)arg1;
- (id)sendProtobufRequest:(id)arg1 type:(unsigned short)arg2 priority:(long long)arg3 expectsResponse:(_Bool)arg4 errorHandler:(CDUnknownBlockType)arg5 withTimeout:(double)arg6;

@end
