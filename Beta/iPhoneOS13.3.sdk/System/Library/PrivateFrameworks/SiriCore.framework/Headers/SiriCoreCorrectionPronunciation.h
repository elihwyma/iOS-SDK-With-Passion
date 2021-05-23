/*
 Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

#import <ProtocolBuffer/PBCodable.h>

#import <SiriCore/Swift-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface SiriCoreCorrectionPronunciation : PBCodable <Swift>

{
    NSString *_apgId;
    NSData *_asrPronunciationData;
    NSString *_language;
    NSString *_orthography;
    int _tokenOffset;
    NSMutableArray *_ttsPronunciations;
    NSString *_ttsVersion;
    struct {
        unsigned int tokenOffset:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasOrthography;
@property (retain, nonatomic) NSString *orthography;
@property (nonatomic, readonly) _Bool hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (nonatomic, readonly) _Bool hasApgId;
@property (retain, nonatomic) NSString *apgId;
@property (nonatomic, readonly) _Bool hasTtsVersion;
@property (retain, nonatomic) NSString *ttsVersion;
@property (nonatomic) _Bool hasTokenOffset;
@property (nonatomic) int tokenOffset;
@property (retain, nonatomic) NSMutableArray *ttsPronunciations;
@property (nonatomic, readonly) _Bool hasAsrPronunciationData;
@property (retain, nonatomic) NSData *asrPronunciationData;

+ (Class)ttsPronunciationsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addTtsPronunciations:(id)arg1;
- (unsigned long long)ttsPronunciationsCount;
- (void)clearTtsPronunciations;
- (id)ttsPronunciationsAtIndex:(unsigned long long)arg1;

@end
