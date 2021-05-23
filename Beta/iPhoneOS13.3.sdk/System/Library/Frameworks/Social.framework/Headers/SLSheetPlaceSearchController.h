/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

@class NSArray, NSLock, NSString, NSTimer, UISearchDisplayController;

@protocol SLPlaceDataSource;

@interface SLSheetPlaceSearchController : NSObject

{
    NSTimer *_delayTimer;
    _Bool _isSearching;
    NSString *_searchString;
    int _retryCount;
    NSLock *_retryLock;
    NSObject<SLPlaceDataSource> *_placeDataSource;
    UISearchDisplayController *_searchDisplayController;
    NSArray *_searchResults;
}

@property (retain) NSObject<SLPlaceDataSource> *placeDataSource;
@property (retain) UISearchDisplayController *searchDisplayController;
@property (retain) NSArray *searchResults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)cancelSearch;
- (void)placeManager:(id)arg1 failedWithError:(id)arg2;
- (void)placeManager:(id)arg1 updatedPlaces:(id)arg2;
- (id)initWithPlaceDataSource:(id)arg1 searchDisplayController:(id)arg2;
- (void)searchWithSearchString:(id)arg1;
- (void)performDelayedFetch:(id)arg1;

@end
