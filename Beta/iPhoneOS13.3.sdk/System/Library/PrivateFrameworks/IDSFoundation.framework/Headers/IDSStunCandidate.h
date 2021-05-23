/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@interface IDSStunCandidate : NSObject

{
    _Bool _active;
    unsigned long long _type;
    unsigned long long _priority;
    long long _transport;
    int _index;
    struct sockaddr_storage _address;
    struct sockaddr_storage _external;
    CDStruct_330c469e _prefix;
    unsigned int _radioAccessTechnology;
    unsigned int _mtu;
    double _extIPDetectionStartTime;
    unsigned short _remoteLinkFlags;
}

@property (nonatomic) _Bool active;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) unsigned long long priority;
@property (nonatomic, readonly) long long transport;
@property (nonatomic, readonly) int index;
@property (nonatomic, readonly) const struct sockaddr *address;
@property (nonatomic) struct sockaddr *external;
@property (nonatomic) CDStruct_330c469e *prefix;
@property (nonatomic) unsigned int radioAccessTechnology;
@property (nonatomic) unsigned int mtu;
@property (nonatomic) double extIPDetectionStartTime;
@property (nonatomic) unsigned short remoteLinkFlags;

+ (id)candidateWithType:(unsigned long long)arg1 transport:(long long)arg2 radioAccessTechnology:(unsigned int)arg3 mtu:(unsigned int)arg4 index:(int)arg5 address:(struct sockaddr *)arg6 external:(struct sockaddr *)arg7;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (_Bool)isCellularStunCandidate;
- (void)updateTransport:(long long)arg1;
- (_Bool)isCompatibleWithStunCandidate:(id)arg1;
- (_Bool)hasNATIPv4Address;
- (_Bool)hasNATIPv4External;
- (_Bool)isLinkLocalStunCandidate;
- (_Bool)isSameNetworkType:(id)arg1;
- (_Bool)isRelayStunCandidate;
- (id)initWithType:(unsigned long long)arg1 transport:(long long)arg2 radioAccessTechnology:(unsigned int)arg3 mtu:(unsigned int)arg4 index:(int)arg5 address:(struct sockaddr *)arg6 external:(struct sockaddr *)arg7;
- (_Bool)isServerReflexiveStunCandidate;

@end
