/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NTPBDate;

@interface NTPBReadingHistoryItem : PBCodable

{
    long long _maxVersionRead;
    long long _maxVersionSeen;
    NSString *_articleID;
    NSString *_deviceID;
    NTPBDate *_firstSeenDate;
    NTPBDate *_firstSeenDateOfMaxVersionSeen;
    unsigned int _flags;
    NTPBDate *_lastVisitedDate;
    NSString *_sourceChannelTagID;
    struct {
        unsigned int maxVersionRead:1;
        unsigned int maxVersionSeen:1;
        unsigned int flags:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasArticleID;
@property (retain, nonatomic) NSString *articleID;
@property (nonatomic, readonly) _Bool hasLastVisitedDate;
@property (retain, nonatomic) NTPBDate *lastVisitedDate;
@property (nonatomic) _Bool hasFlags;
@property (nonatomic) unsigned int flags;
@property (nonatomic) _Bool hasMaxVersionRead;
@property (nonatomic) long long maxVersionRead;
@property (nonatomic, readonly) _Bool hasFirstSeenDate;
@property (retain, nonatomic) NTPBDate *firstSeenDate;
@property (nonatomic, readonly) _Bool hasFirstSeenDateOfMaxVersionSeen;
@property (retain, nonatomic) NTPBDate *firstSeenDateOfMaxVersionSeen;
@property (nonatomic) _Bool hasMaxVersionSeen;
@property (nonatomic) long long maxVersionSeen;
@property (nonatomic, readonly) _Bool hasSourceChannelTagID;
@property (retain, nonatomic) NSString *sourceChannelTagID;
@property (nonatomic, readonly) _Bool hasDeviceID;
@property (retain, nonatomic) NSString *deviceID;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
