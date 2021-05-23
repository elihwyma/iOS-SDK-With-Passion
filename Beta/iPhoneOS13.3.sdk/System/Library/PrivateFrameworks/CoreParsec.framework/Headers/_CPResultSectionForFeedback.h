/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSArray, NSData, NSString;

@interface _CPResultSectionForFeedback : PBCodable

{
    int _knownBundleIdentifier;
    NSArray *_results;
    NSString *_identifier;
    double _rankingScore;
    NSData *_fallbackResultSection;
    NSString *_bundleIdentifier;
    unsigned long long _whichBundleid;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *results;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) double rankingScore;
@property (copy, nonatomic) NSData *fallbackResultSection;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) int knownBundleIdentifier;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly) unsigned long long whichBundleid;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (void)addResults:(id)arg1;
- (void)clearResults;
- (unsigned long long)resultsCount;
- (id)resultsAtIndex:(unsigned long long)arg1;
- (id)feedbackJSON;
- (void)clearBundleid;

@end
