/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NEVPNProtocol, NSArray;

@interface NEVPN : NSObject

{
    _Bool _enabled;
    _Bool _onDemandEnabled;
    _Bool _disconnectOnDemandEnabled;
    NSArray *_onDemandRules;
    NEVPNProtocol *_protocol;
    long long _tunnelType;
    NSArray *_exceptionApps;
}

@property (copy) NSArray *exceptionApps;
@property (getter=isEnabled) _Bool enabled;
@property (getter=isOnDemandEnabled) _Bool onDemandEnabled;
@property (nonatomic, getter=isDisconnectOnDemandEnabled) _Bool disconnectOnDemandEnabled;
@property (copy) NSArray *onDemandRules;
@property (copy) NEVPNProtocol *protocol;
@property long long tunnelType;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)copyLegacyDictionary;
- (id)initFromLegacyDictionary:(id)arg1;

@end
