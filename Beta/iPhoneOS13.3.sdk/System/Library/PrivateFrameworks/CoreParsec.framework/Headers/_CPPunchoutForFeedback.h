/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSArray, NSData, NSString;

@interface _CPPunchoutForFeedback : PBCodable

{
    int _knownBundleIdentifier;
    NSString *_name;
    NSString *_label;
    NSArray *_urls;
    NSString *_bundleIdentifier;
    unsigned long long _whichBundleid;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSArray *urls;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) int knownBundleIdentifier;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly) unsigned long long whichBundleid;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (unsigned long long)urlsCount;
- (void)clearUrls;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (void)addUrls:(id)arg1;
- (id)urlsAtIndex:(unsigned long long)arg1;
- (id)feedbackJSON;
- (void)clearBundleid;

@end
