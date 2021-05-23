/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <CoreMotion/CMOdometerData.h>

@class NSString;

@interface CMOdometerData (HealthDaemon)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)hd_compare:(id)arg1;
- (id)hd_sourceID;
- (id)hd_datestamp;
- (id)hd_epochDatestamp;
- (id)hd_unitForType:(id)arg1;

@end
