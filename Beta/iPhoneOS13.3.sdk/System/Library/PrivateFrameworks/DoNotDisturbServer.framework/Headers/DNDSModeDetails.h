/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <Foundation/NSObject.h>

@interface DNDSModeDetails : NSObject

{
    unsigned long long _interruptionSuppression;
}

@property (nonatomic, readonly) unsigned long long interruptionSuppression;

+ (id)detailsForInactiveDoNotDisturb;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)restrictedDetailsWithDetails:(id)arg1;
- (id)initWithInterruptionSuppression:(unsigned long long)arg1;

@end
