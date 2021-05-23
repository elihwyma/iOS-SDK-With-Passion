/*
 Image: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
 */

#import <Foundation/NSObject.h>

#import <SystemStatus/Swift-Protocol.h>

@class NSString;

@interface STWifiStatusDomainData : NSObject <Swift>

{
    _Bool _wifiActive;
    unsigned long long _signalStrengthBars;
    _Bool _associatedToIOSHotspot;
}

@property (nonatomic, readonly, getter=isWifiActive) _Bool wifiActive;
@property (nonatomic, readonly) unsigned long long signalStrengthBars;
@property (nonatomic, readonly, getter=isAssociatedToIOSHotspot) _Bool associatedToIOSHotspot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)diffFromData:(id)arg1;
- (id)dataByApplyingDiff:(id)arg1;
- (id)initWithWifiActive:(_Bool)arg1 signalStrengthBars:(unsigned long long)arg2 associatedToIOSHotspot:(_Bool)arg3;

@end
