/*
 Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, SFSearchSuggestion;

@interface SPSearchQuery : NSObject

{
    unsigned long long _queryID;
    NSString *_searchString;
    NSString *_keyboardLanguage;
    NSString *_keyboardPrimaryLanguage;
    double _scaleFactor;
    NSArray *markedTextArray;
    _Bool _finished;
    _Bool _promoteLocalResults;
    _Bool _promoteParsecResults;
    double _creationTime;
    double _cancellationTime;
    unsigned long long _creationStamp;
    _Atomic _Bool _cancelled;
    _Bool _grouped;
    _Bool _noTokenize;
    _Bool _infinitePatience;
    _Bool _isWideScreen;
    _Bool _isPasscodeLocked;
    _Bool _internalDebug;
    _Bool _internalValidation;
    NSArray *_searchDomains;
    NSArray *_markedTextArray;
    SFSearchSuggestion *_engagedSuggestion;
    NSArray *_disabledDomains;
    NSArray *_searchEntities;
    long long _maxCount;
    NSArray *_disabledBundles;
    NSArray *_disabledApps;
    unsigned long long _whyQuery;
    unsigned long long _queryIdent;
    long long _contentFilters;
    double _currentTime;
}

@property (nonatomic, readonly) NSString *searchString;
@property (nonatomic, readonly) SFSearchSuggestion *engagedSuggestion;
@property (nonatomic, readonly) NSString *keyboardLanguage;
@property (nonatomic, readonly) NSString *keyboardPrimaryLanguage;
@property (nonatomic, readonly) double scaleFactor;
@property (nonatomic, readonly) _Bool cancelled;
@property (nonatomic, readonly) NSArray *searchDomains;
@property (nonatomic, readonly) NSArray *disabledDomains;
@property (nonatomic, readonly) NSArray *searchEntities;
@property (nonatomic) _Bool grouped;
@property (nonatomic) long long maxCount;
@property (retain, nonatomic) NSArray *disabledBundles;
@property (retain, nonatomic) NSArray *disabledApps;
@property (nonatomic, readonly) NSArray *markedTextArray;
@property (nonatomic, readonly) _Bool hasMarkedText;
@property (nonatomic) _Bool noTokenize;
@property (nonatomic) _Bool infinitePatience;
@property (nonatomic) unsigned long long whyQuery;
@property (nonatomic) _Bool isWideScreen;
@property (nonatomic, readonly) _Bool isPasscodeLocked;
@property (nonatomic) unsigned long long queryIdent;
@property (nonatomic) _Bool promoteLocalResults;
@property (nonatomic) _Bool promoteParsecResults;
@property (nonatomic) _Bool internalDebug;
@property (nonatomic) _Bool internalValidation;
@property (nonatomic) long long contentFilters;
@property (nonatomic, readonly) double creationTime;
@property (nonatomic, readonly) double cancellationTime;
@property (nonatomic, readonly) unsigned long long creationStamp;
@property (nonatomic, readonly) double currentTime;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)cancel;
- (void)execute:(CDUnknownBlockType)arg1;
- (id)initWithSearchQueryContext:(id)arg1;
- (id)initWithQuery:(id)arg1 domains:(id)arg2;

@end
