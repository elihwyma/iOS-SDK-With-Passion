/*
 Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

#import <CarPlay/CPTemplate.h>

@class NAFuture, NSArray, NSString;

@protocol CPSearchTemplateDelegate;

@interface CPSearchTemplate : CPTemplate

{
    id <CPSearchTemplateDelegate> _delegate;
    NSArray *_listItems;
}

@property (retain, nonatomic) NSArray *listItems;
@property (retain, nonatomic) NAFuture *templateProviderFuture;
@property (weak, nonatomic) id <CPSearchTemplateDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)leadingNavigationBarButtons;
- (void)setLeadingNavigationBarButtons:(id)arg1;
- (id)trailingNavigationBarButtons;
- (void)setTrailingNavigationBarButtons:(id)arg1;
- (void)searchTemplate:(id)arg1 updateSearchResultsForSearchText:(id)arg2 completionResults:(CDUnknownBlockType)arg3;
- (void)searchTemplate:(id)arg1 selectedResult:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)searchTemplateSearchButtonPressed:(id)arg1;

@end
