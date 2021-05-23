/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOMapRegion, GEOPDFlyover, NSString, PBDataReader;

@interface GEOAnnouncement : PBCodable

{
    PBDataReader *_reader;
    NSString *_buttonOneAppURI;
    NSString *_buttonOneMessage;
    NSString *_buttonTwoAppURI;
    NSString *_buttonTwoMessage;
    GEOPDFlyover *_flyoverInfo;
    GEOMapRegion *_mapRegion;
    NSString *_title;
    NSString *_userMessage;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _announcementID;
    int _announcementType;
    unsigned int _displayDestinations;
    int _releasePhase;
    struct {
        unsigned int has_announcementID:1;
        unsigned int has_announcementType:1;
        unsigned int has_displayDestinations:1;
        unsigned int has_releasePhase:1;
        unsigned int read_buttonOneAppURI:1;
        unsigned int read_buttonOneMessage:1;
        unsigned int read_buttonTwoAppURI:1;
        unsigned int read_buttonTwoMessage:1;
        unsigned int read_flyoverInfo:1;
        unsigned int read_mapRegion:1;
        unsigned int read_title:1;
        unsigned int read_userMessage:1;
        unsigned int wrote_buttonOneAppURI:1;
        unsigned int wrote_buttonOneMessage:1;
        unsigned int wrote_buttonTwoAppURI:1;
        unsigned int wrote_buttonTwoMessage:1;
        unsigned int wrote_flyoverInfo:1;
        unsigned int wrote_mapRegion:1;
        unsigned int wrote_title:1;
        unsigned int wrote_userMessage:1;
        unsigned int wrote_announcementID:1;
        unsigned int wrote_announcementType:1;
        unsigned int wrote_displayDestinations:1;
        unsigned int wrote_releasePhase:1;
    } _flags;
}

@property (nonatomic) _Bool hasAnnouncementID;
@property (nonatomic) unsigned int announcementID;
@property (nonatomic, readonly) _Bool hasMapRegion;
@property (retain, nonatomic) GEOMapRegion *mapRegion;
@property (nonatomic, readonly) _Bool hasUserMessage;
@property (retain, nonatomic) NSString *userMessage;
@property (nonatomic, readonly) _Bool hasButtonOneMessage;
@property (retain, nonatomic) NSString *buttonOneMessage;
@property (nonatomic, readonly) _Bool hasButtonOneAppURI;
@property (retain, nonatomic) NSString *buttonOneAppURI;
@property (nonatomic, readonly) _Bool hasButtonTwoMessage;
@property (retain, nonatomic) NSString *buttonTwoMessage;
@property (nonatomic, readonly) _Bool hasButtonTwoAppURI;
@property (retain, nonatomic) NSString *buttonTwoAppURI;
@property (nonatomic) _Bool hasDisplayDestinations;
@property (nonatomic) unsigned int displayDestinations;
@property (nonatomic) _Bool hasReleasePhase;
@property (nonatomic) int releasePhase;
@property (nonatomic, readonly) _Bool hasFlyoverInfo;
@property (retain, nonatomic) GEOPDFlyover *flyoverInfo;
@property (nonatomic, readonly) _Bool hasTitle;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) _Bool hasAnnouncementType;
@property (nonatomic) int announcementType;

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
- (void)_readMapRegion;
- (void)_readTitle;
- (void)_readUserMessage;
- (void)_readButtonOneMessage;
- (void)_readButtonOneAppURI;
- (void)_readButtonTwoMessage;
- (void)_readButtonTwoAppURI;
- (void)_readFlyoverInfo;
- (id)releasePhaseAsString:(int)arg1;
- (int)StringAsReleasePhase:(id)arg1;
- (id)announcementTypeAsString:(int)arg1;
- (int)StringAsAnnouncementType:(id)arg1;

@end
