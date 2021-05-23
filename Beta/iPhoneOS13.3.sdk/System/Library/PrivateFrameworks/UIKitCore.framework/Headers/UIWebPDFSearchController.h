/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSOperationQueue, NSString, UIPDFDocument;

@protocol UIWebPDFSearchControllerDelegate;

@interface UIWebPDFSearchController : NSObject

{
    unsigned long long _resultIndexWhenLimitHit;
    _Bool _notifiedThatSearchBegin;
    unsigned long long _pageIndexWhenLimitHit;
    NSOperationQueue *_searchQueue;
    NSMutableArray *_results;
    NSString *_searchString;
    UIPDFDocument *_documentToSearch;
    NSObject<UIWebPDFSearchControllerDelegate> *searchDelegate;
    unsigned long long startingPageIndex;
    double documentScale;
    unsigned long long resultLimit;
}

@property (retain, nonatomic) NSArray *results;
@property (retain, nonatomic) NSString *searchString;
@property (nonatomic) NSObject<UIWebPDFSearchControllerDelegate> *searchDelegate;
@property (retain, nonatomic) UIPDFDocument *documentToSearch;
@property (nonatomic) double documentScale;
@property (nonatomic) unsigned long long startingPageIndex;
@property (nonatomic) unsigned long long resultLimit;
@property (nonatomic, readonly) _Bool searching;
@property (nonatomic, readonly) _Bool paused;

- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)pause;
- (void)resume;
- (void)search:(id)arg1;
- (void)searchDidBegin:(id)arg1;
- (void)searchDidTimeOut:(id)arg1;
- (void)searchWasCancelled:(id)arg1;
- (void)searchLimitHit:(id)arg1;
- (void)searchDidFinish:(id)arg1;
- (void)search:(id)arg1 hasPartialResults:(id)arg2;
- (unsigned long long)_actualStartingPageIndex;
- (void)_clearSearchQueue;

@end
