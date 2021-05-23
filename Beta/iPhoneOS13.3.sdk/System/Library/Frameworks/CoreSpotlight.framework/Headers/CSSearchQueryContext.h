/*
 Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE, NSArray, NSDictionary, NSString;

@interface CSSearchQueryContext : NSObject

{
    NSArray *_fetchAttributes;
    unsigned char _flags;
    int _rankingType;
    unsigned int _qos;
    NSString *_clientBundleID;
    NSArray *_protectionClasses;
    NSArray *_bundleIDs;
    NSArray *_rankingQueries;
    NSArray *_preferredLanguages;
    NSString *_keyboardLanguage;
    NSArray *_markedTextArray;
    NSArray *_disableBundles;
    NSString *_userQuery;
    NSArray *_filterQueries;
    NSString *_filterQuery;
    long long _strongRankingQueryCount;
    long long _dominantRankingQueryCount;
    long long _dominatedRankingQueryCount;
    long long _maxCount;
    long long _completionResultCount;
    long long _queryID;
    NSString *_completionString;
    NSArray *_completionAttributes;
    double _currentTime;
    NSArray *_mountPoints;
    NSArray *_scopes;
    MISSING_TYPE *_fuzzyMask;
    MISSING_TYPE *_fuzzyMatch;
}

@property (nonatomic) unsigned char flags;
@property (nonatomic) unsigned int qos;
@property (retain, nonatomic) NSString *clientBundleID;
@property (retain, nonatomic) NSArray *fetchAttributes;
@property (retain, nonatomic) NSArray *protectionClasses;
@property (retain, nonatomic) NSArray *bundleIDs;
@property (retain, nonatomic) NSArray *rankingQueries;
@property (retain, nonatomic) NSArray *preferredLanguages;
@property (retain, nonatomic) NSString *keyboardLanguage;
@property (retain, nonatomic) NSArray *markedTextArray;
@property (retain, nonatomic) NSArray *disableBundles;
@property (retain, nonatomic) NSString *userQuery;
@property (nonatomic) int rankingType;
@property (copy, nonatomic) NSArray *filterQueries;
@property (retain, nonatomic) NSString *filterQuery;
@property (nonatomic) long long strongRankingQueryCount;
@property (nonatomic) long long dominantRankingQueryCount;
@property (nonatomic) long long dominatedRankingQueryCount;
@property (nonatomic) long long maxCount;
@property (nonatomic) long long completionResultCount;
@property (nonatomic) long long queryID;
@property (nonatomic) _Bool internal;
@property (nonatomic) _Bool grouped;
@property (nonatomic) _Bool live;
@property (nonatomic) _Bool counting;
@property (nonatomic) _Bool attribute;
@property (nonatomic) _Bool lowPriority;
@property (nonatomic) _Bool parseUserQuery;
@property (nonatomic) _Bool fsOnly;
@property (nonatomic) MISSING_TYPE *fuzzyMask;
@property (nonatomic) MISSING_TYPE *fuzzyMatch;
@property (retain, nonatomic) NSString *completionString;
@property (retain, nonatomic) NSArray *completionAttributes;
@property (copy, nonatomic) NSDictionary *options;
@property (nonatomic) double currentTime;
@property (retain, nonatomic) NSArray *mountPoints;
@property (retain, nonatomic) NSArray *scopes;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)xpc_dictionary;
- (id)initWithQoS:(unsigned int)arg1;

@end
