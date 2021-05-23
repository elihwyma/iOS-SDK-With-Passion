/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@interface CTDataUsage : NSObject

{
    unsigned long long _cellularHome;
    unsigned long long _cellularRoaming;
    unsigned long long _wifi;
}

@property (nonatomic) unsigned long long cellularHome;
@property (nonatomic) unsigned long long cellularRoaming;
@property (nonatomic) unsigned long long wifi;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHome:(unsigned long long)arg1 roaming:(unsigned long long)arg2 wifi:(unsigned long long)arg3;
- (void)addUsage:(id)arg1;

@end
