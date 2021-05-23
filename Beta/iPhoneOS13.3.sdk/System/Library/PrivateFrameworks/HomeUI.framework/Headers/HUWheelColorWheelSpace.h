/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HUWheelColorWheelSpace : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic) unsigned long long mirroringBiasAxis;

- (CDStruct_d2b197d1)colorForCoordinate:(CDStruct_c3b9c2ee)arg1;
- (CDStruct_c3b9c2ee)coordinateForColor:(CDStruct_d2b197d1)arg1 isValid:(out _Bool *)arg2;

@end
