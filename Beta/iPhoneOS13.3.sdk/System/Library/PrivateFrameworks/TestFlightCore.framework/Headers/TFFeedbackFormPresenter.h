/*
 Image: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
 */

#import <Foundation/NSObject.h>

@class NSString, TFFeedbackDataContainer, TFFeedbackForm, TFFeedbackSession;

@protocol TFFeedbackDataSource, TFFeedbackFormPresenterView;

__attribute__((visibility("hidden")))
@interface TFFeedbackFormPresenter : NSObject

{
    id <TFFeedbackFormPresenterView> _presenterView;
    TFFeedbackForm *_form;
    TFFeedbackDataContainer *_dataContainer;
    TFFeedbackSession *_session;
}

@property (nonatomic, readonly) TFFeedbackForm *form;
@property (nonatomic, readonly) TFFeedbackDataContainer *dataContainer;
@property (nonatomic, readonly) TFFeedbackSession *session;
@property (weak, nonatomic) id <TFFeedbackFormPresenterView> presenterView;
@property (nonatomic, readonly) id <TFFeedbackDataSource> feedbackDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)didUpdateEntry:(id)arg1 toString:(id)arg2 editInProgress:(_Bool)arg3;
- (void)prepareViewForForm;
- (void)presenterViewDidInitiateFeedbackSubmission:(id)arg1;
- (id)visibleEntryAtGroupIndex:(long long)arg1 entryIndex:(long long)arg2;
- (unsigned long long)numberOfVisibleItemsInGroupAtIndex:(long long)arg1;
- (unsigned long long)numberOfEntryGroupsInForm;
- (id)headerTextForGroupAtIndex:(long long)arg1;
- (id)footerTextForGroupAtIndex:(long long)arg1;
- (id)footerTextLinkMapForGroupAtIndex:(long long)arg1;
- (void)feedbackDataContainer:(id)arg1 didUpdateValuesForGroupIdentifiers:(id)arg2 entryIdentifiers:(id)arg3;
- (void)didUpdateEntry:(id)arg1 toGroupInclusionBool:(_Bool)arg2;
- (id)_indexPathsOfVisibleEntriesWithIdentifiers:(id)arg1;
- (id)_indicesOfGroupsWithIdentifiers:(id)arg1;
- (id)initWithForm:(id)arg1 dataContainer:(id)arg2 session:(id)arg3;
- (id)headerTextLinkMapForGroupAtIndex:(long long)arg1;
- (void)showSubmissionFailureWithMessage:(id)arg1;

@end
