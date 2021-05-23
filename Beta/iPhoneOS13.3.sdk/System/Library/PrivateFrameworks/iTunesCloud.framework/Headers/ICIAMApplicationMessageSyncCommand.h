/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <PBCodable.h>

#import <iTunesCloud/Swift-Protocol.h>

@class ICIAMApplicationMessage;

@interface ICIAMApplicationMessageSyncCommand : PBCodable <Swift>

{
    long long _commandSerialNumber;
    ICIAMApplicationMessage *_applicationMessage;
    int _commandType;
    struct {
        unsigned int commandSerialNumber:1;
        unsigned int commandType:1;
    } _has;
}

@property (nonatomic) _Bool hasCommandType;
@property (nonatomic) int commandType;
@property (nonatomic, readonly) _Bool hasApplicationMessage;
@property (retain, nonatomic) ICIAMApplicationMessage *applicationMessage;
@property (nonatomic) _Bool hasCommandSerialNumber;
@property (nonatomic) long long commandSerialNumber;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)commandTypeAsString:(int)arg1;
- (int)StringAsCommandType:(id)arg1;

@end
