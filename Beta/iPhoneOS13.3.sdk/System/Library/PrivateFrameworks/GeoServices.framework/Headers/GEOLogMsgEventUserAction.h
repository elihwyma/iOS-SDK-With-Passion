/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBDataReader;

@interface GEOLogMsgEventUserAction : PBCodable

{
    PBDataReader *_reader;
    NSString *_userActionEventKey;
    NSString *_userActionEventValue;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _userActionEventAction;
    int _userActionEventTarget;
    struct {
        unsigned int has_userActionEventAction:1;
        unsigned int has_userActionEventTarget:1;
        unsigned int read_userActionEventKey:1;
        unsigned int read_userActionEventValue:1;
        unsigned int wrote_userActionEventKey:1;
        unsigned int wrote_userActionEventValue:1;
        unsigned int wrote_userActionEventAction:1;
        unsigned int wrote_userActionEventTarget:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasUserActionEventKey;
@property (retain, nonatomic) NSString *userActionEventKey;
@property (nonatomic, readonly) _Bool hasUserActionEventValue;
@property (retain, nonatomic) NSString *userActionEventValue;
@property (nonatomic) _Bool hasUserActionEventTarget;
@property (nonatomic) int userActionEventTarget;
@property (nonatomic) _Bool hasUserActionEventAction;
@property (nonatomic) int userActionEventAction;

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
- (void)_readUserActionEventKey;
- (void)_readUserActionEventValue;
- (id)userActionEventTargetAsString:(int)arg1;
- (int)StringAsUserActionEventTarget:(id)arg1;
- (id)userActionEventActionAsString:(int)arg1;
- (int)StringAsUserActionEventAction:(id)arg1;

@end
