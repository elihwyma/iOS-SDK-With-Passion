/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NTPBIssueData;

@interface NTPBIssueDownload : PBCodable

{
    int _downloadLocation;
    int _downloadState;
    int _downloadType;
    NTPBIssueData *_issueData;
    NSString *_sourceChannelId;
    struct {
        unsigned int downloadLocation:1;
        unsigned int downloadState:1;
        unsigned int downloadType:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasIssueData;
@property (retain, nonatomic) NTPBIssueData *issueData;
@property (nonatomic) _Bool hasDownloadLocation;
@property (nonatomic) int downloadLocation;
@property (nonatomic) _Bool hasDownloadState;
@property (nonatomic) int downloadState;
@property (nonatomic) _Bool hasDownloadType;
@property (nonatomic) int downloadType;
@property (nonatomic, readonly) _Bool hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
