/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSProcessInfo.h>

@interface NSProcessInfo (SafariSharedExtras)

@property (nonatomic, readonly) _Bool safari_systemSupportsBroadway;

- (id)_safari_operatingSystemVersionStringFromOperatingSystemVersion:(CDStruct_f6aba300)arg1;
- (id)safari_operatingSystemVersionString;

@end
