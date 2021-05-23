/*
 Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSData, NSString;

@interface ADAttributionRequest : PBRequest

{
    double _downloadClickTimestamp;
    double _iAdConversionTimestamp;
    double _iAdImpressionTimestamp;
    double _purchaseTimestamp;
    double _searchAdClickTimestamp;
    NSString *_adMetadata;
    NSData *_anonymousDemandiAdID;
    NSString *_bundleID;
    NSData *_dPID;
    int _downloadType;
    NSData *_iAdID;
    int _runState;
    NSData *_tiltID;
    NSData *_toroID;
    _Bool _attributedByiTunes;
    struct {
        unsigned int downloadClickTimestamp:1;
        unsigned int iAdConversionTimestamp:1;
        unsigned int iAdImpressionTimestamp:1;
        unsigned int purchaseTimestamp:1;
        unsigned int searchAdClickTimestamp:1;
        unsigned int downloadType:1;
        unsigned int runState:1;
        unsigned int attributedByiTunes:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasIAdID;
@property (retain, nonatomic) NSData *iAdID;
@property (nonatomic, readonly) _Bool hasTiltID;
@property (retain, nonatomic) NSData *tiltID;
@property (nonatomic, readonly) _Bool hasAnonymousDemandiAdID;
@property (retain, nonatomic) NSData *anonymousDemandiAdID;
@property (nonatomic, readonly) _Bool hasBundleID;
@property (retain, nonatomic) NSString *bundleID;
@property (nonatomic) _Bool hasPurchaseTimestamp;
@property (nonatomic) double purchaseTimestamp;
@property (nonatomic) _Bool hasIAdConversionTimestamp;
@property (nonatomic) double iAdConversionTimestamp;
@property (nonatomic) _Bool hasIAdImpressionTimestamp;
@property (nonatomic) double iAdImpressionTimestamp;
@property (nonatomic) _Bool hasAttributedByiTunes;
@property (nonatomic) _Bool attributedByiTunes;
@property (nonatomic) _Bool hasRunState;
@property (nonatomic) int runState;
@property (nonatomic, readonly) _Bool hasToroID;
@property (retain, nonatomic) NSData *toroID;
@property (nonatomic, readonly) _Bool hasDPID;
@property (retain, nonatomic) NSData *dPID;
@property (nonatomic) _Bool hasSearchAdClickTimestamp;
@property (nonatomic) double searchAdClickTimestamp;
@property (nonatomic, readonly) _Bool hasAdMetadata;
@property (retain, nonatomic) NSString *adMetadata;
@property (nonatomic) _Bool hasDownloadClickTimestamp;
@property (nonatomic) double downloadClickTimestamp;
@property (nonatomic) _Bool hasDownloadType;
@property (nonatomic) int downloadType;

+ (id)options;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)runStateAsString:(int)arg1;
- (int)StringAsRunState:(id)arg1;
- (id)downloadTypeAsString:(int)arg1;
- (int)StringAsDownloadType:(id)arg1;

@end
