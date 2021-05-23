/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString, _CPActionItemForFeedback, _CPPunchoutForFeedback, _CPStruct;

@protocol NSCopying;

@interface _CPSearchResultForFeedback : PBCodable

{
    _Bool _isStaticCorrection;
    _Bool _isLocalApplicationResult;
    _Bool _publiclyIndexable;
    _Bool _isFuzzyMatch;
    _Bool _doNotFold;
    int _topHit;
    int _type;
    int _knownResultBundleId;
    int _knownSectionBundleIdentifier;
    int _knownApplicationBundleIdentifier;
    NSString *_identifier;
    _CPActionItemForFeedback *_action;
    _CPPunchoutForFeedback *_punchout;
    NSString *_srf;
    _CPStruct *_localFeatures;
    NSString *_resultType;
    double _rankingScore;
    unsigned long long _queryId;
    NSString *_intendedQuery;
    NSString *_correctedQuery;
    NSString *_completedQuery;
    NSString *_fbr;
    NSString *_userInput;
    unsigned long long _blockId;
    unsigned long long _hashedIdentifier;
    NSString *_resultBundleId;
    NSString *_sectionBundleIdentifier;
    NSString *_applicationBundleIdentifier;
    NSData *_entityData;
    unsigned long long _whichResultbundleidentifier;
    unsigned long long _whichSectionbundleid;
    unsigned long long _whichApplicationbundleid;
}

@property (copy, nonatomic, readonly) id <NSCopying> jsonIdentifier;
@property (copy, nonatomic, readonly) NSString *jsonResultBundleIdentifier;
@property (copy, nonatomic, readonly) NSString *jsonSectionBundleIdentifier;
@property (copy, nonatomic, readonly) NSString *jsonApplicationBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) int topHit;
@property (retain, nonatomic) _CPActionItemForFeedback *action;
@property (retain, nonatomic) _CPPunchoutForFeedback *punchout;
@property (nonatomic) int type;
@property (copy, nonatomic) NSString *srf;
@property (retain, nonatomic) _CPStruct *localFeatures;
@property (copy, nonatomic) NSString *resultType;
@property (nonatomic) double rankingScore;
@property (nonatomic) _Bool isStaticCorrection;
@property (nonatomic) unsigned long long queryId;
@property (copy, nonatomic) NSString *intendedQuery;
@property (copy, nonatomic) NSString *correctedQuery;
@property (copy, nonatomic) NSString *completedQuery;
@property (nonatomic) _Bool isLocalApplicationResult;
@property (nonatomic) _Bool publiclyIndexable;
@property (copy, nonatomic) NSString *fbr;
@property (copy, nonatomic) NSString *userInput;
@property (nonatomic) _Bool isFuzzyMatch;
@property (nonatomic) _Bool doNotFold;
@property (nonatomic) unsigned long long blockId;
@property (nonatomic) unsigned long long hashedIdentifier;
@property (copy, nonatomic) NSString *resultBundleId;
@property (nonatomic) int knownResultBundleId;
@property (copy, nonatomic) NSString *sectionBundleIdentifier;
@property (nonatomic) int knownSectionBundleIdentifier;
@property (copy, nonatomic) NSString *applicationBundleIdentifier;
@property (nonatomic) int knownApplicationBundleIdentifier;
@property (copy, nonatomic) NSData *entityData;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly) unsigned long long whichResultbundleidentifier;
@property (nonatomic, readonly) unsigned long long whichSectionbundleid;
@property (nonatomic, readonly) unsigned long long whichApplicationbundleid;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)feedbackJSON;
- (void)clearResultbundleidentifier;
- (void)clearSectionbundleid;
- (void)clearApplicationbundleid;

@end
