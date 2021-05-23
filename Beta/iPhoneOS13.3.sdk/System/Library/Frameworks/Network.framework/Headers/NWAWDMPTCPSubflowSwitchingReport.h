/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NWAWDMPTCPSubflowSwitchingReport : PBCodable

{
    unsigned long long _timestamp;
    int _switchCount;
    NSString *_switchFromInterfaceName;
    NSString *_switchToInterfaceName;
    struct {
        unsigned int timestamp:1;
        unsigned int switchCount:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, readonly) _Bool hasSwitchFromInterfaceName;
@property (retain, nonatomic) NSString *switchFromInterfaceName;
@property (nonatomic, readonly) _Bool hasSwitchToInterfaceName;
@property (retain, nonatomic) NSString *switchToInterfaceName;
@property (nonatomic) _Bool hasSwitchCount;
@property (nonatomic) int switchCount;

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
