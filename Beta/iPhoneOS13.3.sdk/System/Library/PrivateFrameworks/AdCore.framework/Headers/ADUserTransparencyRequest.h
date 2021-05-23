/*
 Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSData, NSString;

@interface ADUserTransparencyRequest : PBRequest

{
    NSData *_contentiAdID;
    NSData *_dPID;
    NSData *_iAdID;
    NSString *_iTunesStore;
    NSString *_localeIdentifier;
    _Bool _isSignedInToiTunes;
    _Bool _limitAdTracking;
    struct {
        unsigned int isSignedInToiTunes:1;
        unsigned int limitAdTracking:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasDPID;
@property (retain, nonatomic) NSData *dPID;
@property (nonatomic, readonly) _Bool hasLocaleIdentifier;
@property (retain, nonatomic) NSString *localeIdentifier;
@property (nonatomic, readonly) _Bool hasIAdID;
@property (retain, nonatomic) NSData *iAdID;
@property (nonatomic, readonly) _Bool hasContentiAdID;
@property (retain, nonatomic) NSData *contentiAdID;
@property (nonatomic, readonly) _Bool hasITunesStore;
@property (retain, nonatomic) NSString *iTunesStore;
@property (nonatomic) _Bool hasLimitAdTracking;
@property (nonatomic) _Bool limitAdTracking;
@property (nonatomic) _Bool hasIsSignedInToiTunes;
@property (nonatomic) _Bool isSignedInToiTunes;

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

@end
