/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, NSString, PBDataReader;

@interface GEOAvailableAnnouncements : PBCodable

{
    PBDataReader *_reader;
    NSMutableArray *_announcements;
    NSString *_languageCode;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_announcements:1;
        unsigned int read_languageCode:1;
        unsigned int wrote_announcements:1;
        unsigned int wrote_languageCode:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *announcements;
@property (nonatomic, readonly) _Bool hasLanguageCode;
@property (retain, nonatomic) NSString *languageCode;

+ (_Bool)isValid:(id)arg1;
+ (Class)announcementType;

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
- (void)_readAnnouncements;
- (void)_addNoFlagsAnnouncement:(id)arg1;
- (void)_readLanguageCode;
- (unsigned long long)announcementsCount;
- (void)clearAnnouncements;
- (id)announcementAtIndex:(unsigned long long)arg1;
- (void)addAnnouncement:(id)arg1;

@end
