/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, NSURL, SFCard, SFCardSection, SFSearchResult;

@interface SearchUIRowModel : NSObject

{
    _Bool _isTappable;
    _Bool _isDraggable;
    NSArray *_results;
    SFSearchResult *_identifyingResult;
    SFCardSection *_cardSection;
    NSArray *_punchouts;
    NSArray *_contactIdentifiers;
    Class _cellViewClass;
    SFCard *_nextCard;
    double _leadingSeparatorImageInset;
    unsigned long long _queryId;
    NSString *_dragTitle;
    NSString *_dragSubtitle;
    NSString *_dragText;
    NSURL *_dragURL;
    NSString *_dragAppBundleID;
}

@property (retain, nonatomic) NSArray *results;
@property (retain, nonatomic) SFSearchResult *identifyingResult;
@property (retain, nonatomic) SFCardSection *cardSection;
@property (nonatomic, readonly) NSArray *punchouts;
@property (nonatomic, readonly) NSArray *contactIdentifiers;
@property (nonatomic, readonly) NSString *reuseIdentifier;
@property (nonatomic, readonly) Class cellViewClass;
@property (nonatomic, readonly) SFCard *nextCard;
@property (nonatomic, readonly) _Bool isTappable;
@property (nonatomic, readonly) int separatorStyle;
@property (nonatomic, readonly) double leadingSeparatorImageInset;
@property (nonatomic, readonly) unsigned long long queryId;
@property (nonatomic, readonly) _Bool isDraggable;
@property (nonatomic, readonly) NSString *dragTitle;
@property (nonatomic, readonly) NSString *dragSubtitle;
@property (nonatomic, readonly) NSString *dragText;
@property (nonatomic, readonly) NSURL *dragURL;
@property (nonatomic, readonly) NSString *dragAppBundleID;
@property (nonatomic, readonly) _Bool isQuerySuggestion;

- (id)initWithResult:(id)arg1;
- (id)initWithResults:(id)arg1;
- (id)initWithCardSection:(id)arg1 queryId:(unsigned long long)arg2;
- (id)initWithResult:(id)arg1 cardSection:(id)arg2 queryId:(unsigned long long)arg3;
- (id)initWithResults:(id)arg1 cardSection:(id)arg2 queryId:(unsigned long long)arg3;

@end
