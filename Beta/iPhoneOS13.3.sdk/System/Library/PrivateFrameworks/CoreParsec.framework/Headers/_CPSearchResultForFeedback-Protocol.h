/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <CoreParsec/Swift-Protocol.h>

@class NSData, NSString, _CPActionItemForFeedback, _CPPunchoutForFeedback, _CPStruct;

@protocol _CPSearchResultForFeedback <Swift>

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

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;

@end
