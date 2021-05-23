/*
 Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <Foundation/NSObject.h>

@class CLLocationMatchInfo, _CLLocationGroundAltitude;

@interface CLLocationInternal : NSObject

{
    CDStruct_4d1fbe9a fLocation;
    CLLocationMatchInfo *fMatchInfo;
    _CLLocationGroundAltitude *fGroundAltitude;
    double fTrustedTimestamp;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithClientLocation:(CDStruct_4d1fbe9a)arg1;
- (id)initWithClientLocation:(CDStruct_4d1fbe9a)arg1 clientLocationPrivate:(CDStruct_f185aced)arg2;
- (id)initWithClientLocation:(CDStruct_4d1fbe9a)arg1 matchInfo:(id)arg2 trustedTimestamp:(double)arg3 groundAltitude:(id)arg4;

@end
