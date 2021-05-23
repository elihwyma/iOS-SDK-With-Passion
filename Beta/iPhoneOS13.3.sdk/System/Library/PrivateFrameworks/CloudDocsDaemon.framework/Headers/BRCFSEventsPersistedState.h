/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/BRCPersistedState.h>

#import <CloudDocsDaemon/Swift-Protocol.h>

@class NSUUID;

__attribute__((visibility("hidden")))
@interface BRCFSEventsPersistedState : BRCPersistedState <Swift>

{
    NSUUID *_streamUUID;
    unsigned long long _latestEventID;
    unsigned long long _rootID;
}

@property (retain, nonatomic) NSUUID *streamUUID;
@property (nonatomic) unsigned long long latestEventID;
@property (nonatomic) unsigned long long rootID;

+ (_Bool)supportsSecureCoding;
+ (id)loadFromClientStateInSession:(id)arg1 options:(id)arg2;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLatestEventID:(unsigned long long)arg1 streamUUID:(id)arg2 rootID:(unsigned long long)arg3;

@end
