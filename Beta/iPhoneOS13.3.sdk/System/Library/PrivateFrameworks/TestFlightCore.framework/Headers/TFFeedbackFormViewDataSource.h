/*
 Image: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
 */

#import <Foundation/NSObject.h>

@class NSString, TFFeedbackFormCellUpdater, TFFeedbackFormPresenter;

__attribute__((visibility("hidden")))
@interface TFFeedbackFormViewDataSource : NSObject

{
    TFFeedbackFormPresenter *_presenter;
    TFFeedbackFormCellUpdater *_cellUpdater;
}

@property (nonatomic, readonly) TFFeedbackFormPresenter *presenter;
@property (nonatomic, readonly) TFFeedbackFormCellUpdater *cellUpdater;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)initWithPresenter:(id)arg1;
- (void)prepareTableViewForDataSource:(id)arg1;

@end
