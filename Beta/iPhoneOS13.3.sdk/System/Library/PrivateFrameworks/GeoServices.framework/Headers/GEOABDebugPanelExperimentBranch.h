/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOABDebugPanelExperimentBranch : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_branchLabel;
    NSString *_branchName;
    NSString *_experimentId;
    NSString *_experimentName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_branchLabel:1;
        unsigned int read_branchName:1;
        unsigned int read_experimentId:1;
        unsigned int read_experimentName:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_branchLabel:1;
        unsigned int wrote_branchName:1;
        unsigned int wrote_experimentId:1;
        unsigned int wrote_experimentName:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasExperimentId;
@property (retain, nonatomic) NSString *experimentId;
@property (nonatomic, readonly) _Bool hasExperimentName;
@property (retain, nonatomic) NSString *experimentName;
@property (nonatomic, readonly) _Bool hasBranchLabel;
@property (retain, nonatomic) NSString *branchLabel;
@property (nonatomic, readonly) _Bool hasBranchName;
@property (retain, nonatomic) NSString *branchName;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readExperimentId;
- (void)_readExperimentName;
- (void)_readBranchLabel;
- (void)_readBranchName;

@end
