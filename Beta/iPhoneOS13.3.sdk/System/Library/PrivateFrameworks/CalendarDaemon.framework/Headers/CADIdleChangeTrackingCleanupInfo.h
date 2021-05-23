/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <Foundation/NSObject.h>

@interface CADIdleChangeTrackingCleanupInfo : NSObject

{
    int _numberOfChanges;
    double _languishPeriod;
}

@property (nonatomic) double languishPeriod;
@property (nonatomic) int numberOfChanges;

+ (id)serverIdleChangeTrackingCleanupInfo;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithLanguishPeriod:(double)arg1 numberOfChanges:(int)arg2;
- (_Bool)isEqualToInfo:(id)arg1;

@end
