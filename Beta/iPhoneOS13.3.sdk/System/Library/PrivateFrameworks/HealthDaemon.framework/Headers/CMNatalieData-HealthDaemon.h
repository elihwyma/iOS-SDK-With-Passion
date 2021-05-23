/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <CoreMotion/CMNatalieData.h>

@class NSString;

@interface CMNatalieData (HealthDaemon)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (double)hd_activeNatalies;
- (long long)hd_compare:(id)arg1;
- (id)hd_sourceID;
- (id)hd_datestamp;
- (id)hd_epochDatestamp;
- (id)hd_unitForType:(id)arg1;

@end
