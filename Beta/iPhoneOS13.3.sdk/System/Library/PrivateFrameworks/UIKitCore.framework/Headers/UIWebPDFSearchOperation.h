/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSOperation.h>

@class NSMutableArray, NSObject, NSString, UIPDFDocument;

@protocol UIWebPDFSearchOperationDelegate;

__attribute__((visibility("hidden")))
@interface UIWebPDFSearchOperation : NSOperation

{
    NSMutableArray *_results;
    unsigned long long _pageIndex;
    unsigned long long _numberOfResultsToSkip;
    unsigned long long _totalResultsCount;
    unsigned long long _currentPageResultCount;
    _Bool _complete;
    unsigned long long startingPageIndex;
    UIPDFDocument *documentToSearch;
    NSObject<UIWebPDFSearchOperationDelegate> *searchDelegate;
    double documentScale;
    NSString *searchString;
    unsigned long long resultLimit;
}

@property NSObject<UIWebPDFSearchOperationDelegate> *searchDelegate;
@property (nonatomic, readonly) unsigned long long currentPageResultCount;
@property (retain) UIPDFDocument *documentToSearch;
@property (nonatomic, readonly) unsigned long long currentPageIndex;
@property (nonatomic) unsigned long long startingPageIndex;
@property (nonatomic) unsigned long long numberOfResultsToSkip;
@property (nonatomic) unsigned long long resultLimit;
@property (retain, nonatomic) NSString *searchString;
@property (nonatomic) double documentScale;

- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)main;
- (_Bool)_hitSearchLimit;
- (struct __CTFont *)_fontWithPDFFont:(struct CGPDFFont *)arg1 size:(double)arg2;
- (id)sanitizedAttributedStringForAttributedString:(id)arg1;
- (void)_search;
- (void)_notifyDelegateOfStatus;

@end
