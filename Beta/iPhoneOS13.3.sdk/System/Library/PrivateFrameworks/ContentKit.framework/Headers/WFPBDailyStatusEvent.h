/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ProtocolBuffer/PBCodable.h>

#import <ContentKit/Swift-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WFPBDailyStatusEvent : PBCodable <Swift>

{
    NSString *_key;
    _Bool _homeAutomationsEnabled;
    _Bool _installed;
    _Bool _personalAutomationsEnabled;
    _Bool _sharingEnabled;
    struct {
        unsigned int homeAutomationsEnabled:1;
        unsigned int installed:1;
        unsigned int personalAutomationsEnabled:1;
        unsigned int sharingEnabled:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) _Bool hasInstalled;
@property (nonatomic) _Bool installed;
@property (nonatomic) _Bool hasSharingEnabled;
@property (nonatomic) _Bool sharingEnabled;
@property (nonatomic) _Bool hasPersonalAutomationsEnabled;
@property (nonatomic) _Bool personalAutomationsEnabled;
@property (nonatomic) _Bool hasHomeAutomationsEnabled;
@property (nonatomic) _Bool homeAutomationsEnabled;

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
