/*
 Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, SFSearchSuggestion;

@interface SPSearchQueryContext : NSObject

{
    _Bool _allowInternet;
    _Bool _isPasscodeLocked;
    _Bool _forceQueryEvenIfSame;
    _Bool _promoteLocalResults;
    _Bool _promoteParsecResults;
    _Bool _noTokenize;
    _Bool _internalDebug;
    _Bool _internalValidation;
    NSString *_searchString;
    SFSearchSuggestion *_engagedSuggestion;
    NSArray *_markedTextArray;
    NSString *_keyboardLanguage;
    NSString *_keyboardPrimaryLanguage;
    double _scaleFactor;
    NSArray *_searchDomains;
    NSArray *_disabledDomains;
    NSArray *_disabledBundles;
    NSArray *_disabledApps;
    unsigned long long _whyQuery;
    unsigned long long _whyClear;
    unsigned long long _queryIdent;
    NSArray *_searchEntities;
    double _currentTime;
}

@property (nonatomic) _Bool allowInternet;
@property (nonatomic) _Bool isPasscodeLocked;
@property (retain, nonatomic) NSString *searchString;
@property (retain, nonatomic) SFSearchSuggestion *engagedSuggestion;
@property (retain, nonatomic) NSArray *markedTextArray;
@property (nonatomic, readonly) _Bool hasMarkedText;
@property (nonatomic, readonly) NSString *displayedText;
@property (retain, nonatomic) NSString *keyboardLanguage;
@property (retain, nonatomic) NSString *keyboardPrimaryLanguage;
@property (nonatomic) double scaleFactor;
@property (retain, nonatomic) NSArray *searchDomains;
@property (retain, nonatomic) NSArray *disabledDomains;
@property (retain, nonatomic) NSArray *disabledBundles;
@property (retain, nonatomic) NSArray *disabledApps;
@property (nonatomic) _Bool forceQueryEvenIfSame;
@property (nonatomic) unsigned long long whyQuery;
@property (nonatomic) unsigned long long whyClear;
@property (nonatomic) unsigned long long queryIdent;
@property (retain, nonatomic) NSArray *searchEntities;
@property (nonatomic) _Bool promoteLocalResults;
@property (nonatomic) _Bool promoteParsecResults;
@property (nonatomic) _Bool noTokenize;
@property (nonatomic) _Bool internalDebug;
@property (nonatomic) _Bool internalValidation;
@property (nonatomic) double currentTime;

+ (id)queryContextWithSearchString:(id)arg1;

- (id)init;
- (id)initWithSearchString:(id)arg1;

@end
