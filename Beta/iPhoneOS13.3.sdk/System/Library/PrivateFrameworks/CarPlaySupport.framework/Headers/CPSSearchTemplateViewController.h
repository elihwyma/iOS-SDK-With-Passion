/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <UIKit/UISearchContainerViewController.h>

@class CPSearchTemplate, CPTemplate, NAFuture, NSString;

@protocol CPSTemplateViewControllerDelegate, CPSearchClientTemplateDelegate, CPTemplateDelegate;

@interface CPSSearchTemplateViewController : UISearchContainerViewController

{
    _Bool _didPop;
    _Bool _didDisappear;
    NAFuture *_templateProviderFuture;
    id <CPSTemplateViewControllerDelegate> _viewControllerDelegate;
    CPTemplate *_associatedTemplate;
    id <CPTemplateDelegate> _templateDelegate;
}

@property (nonatomic, readonly) CPSearchTemplate *searchTemplate;
@property (weak, nonatomic, readonly) id <CPSearchClientTemplateDelegate> searchTemplateDelegate;
@property (nonatomic) _Bool didPop;
@property (nonatomic) _Bool didDisappear;
@property (weak, nonatomic) id <CPSTemplateViewControllerDelegate> viewControllerDelegate;
@property (retain, nonatomic) CPTemplate *associatedTemplate;
@property (retain, nonatomic) id <CPTemplateDelegate> templateDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NAFuture *templateProviderFuture;

- (void)_cleanup;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)didDismissSearchController:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)listTemplate:(id)arg1 didSelectListItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_cps_viewControllerWasPopped;
- (id)initWithSearchController:(id)arg1 searchTemplate:(id)arg2 templateDelegate:(id)arg3;

@end
