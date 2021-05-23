/*
 Image: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
 */

#import <SystemStatus/STWifiStatusDomainData.h>

@class NSString;

@interface STMutableWifiStatusDomainData : STWifiStatusDomainData

@property (nonatomic, getter=isWifiActive) _Bool wifiActive;
@property (nonatomic) unsigned long long signalStrengthBars;
@property (nonatomic, getter=isAssociatedToIOSHotspot) _Bool associatedToIOSHotspot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)applyDiff:(id)arg1;

@end
