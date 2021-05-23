/*
 Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

#import <ProtocolBuffer/PBCodable.h>

#import <SiriCore/Swift-Protocol.h>

@class NSString, SiriCoreCorrectionPronunciation;

@interface SiriCoreUserCorrectionsProfileEntry : PBCodable <Swift>

{
    unsigned int _alternativesCorrectionsCount;
    NSString *_correctedText;
    SiriCoreCorrectionPronunciation *_pronunciationData;
    unsigned int _spellingCorrectionsCount;
    unsigned int _tap2editCorrectionsCount;
    struct {
        unsigned int alternativesCorrectionsCount:1;
        unsigned int spellingCorrectionsCount:1;
        unsigned int tap2editCorrectionsCount:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasCorrectedText;
@property (retain, nonatomic) NSString *correctedText;
@property (nonatomic, readonly) _Bool hasPronunciationData;
@property (retain, nonatomic) SiriCoreCorrectionPronunciation *pronunciationData;
@property (nonatomic) _Bool hasSpellingCorrectionsCount;
@property (nonatomic) unsigned int spellingCorrectionsCount;
@property (nonatomic) _Bool hasTap2editCorrectionsCount;
@property (nonatomic) unsigned int tap2editCorrectionsCount;
@property (nonatomic) _Bool hasAlternativesCorrectionsCount;
@property (nonatomic) unsigned int alternativesCorrectionsCount;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
