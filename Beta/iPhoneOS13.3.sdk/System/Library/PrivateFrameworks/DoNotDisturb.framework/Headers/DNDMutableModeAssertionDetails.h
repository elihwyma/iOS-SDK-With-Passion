/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

#import <DoNotDisturb/DNDModeAssertionDetails.h>

@class DNDModeAssertionLifetime, NSDate, NSString;

@interface DNDMutableModeAssertionDetails : DNDModeAssertionDetails

@property (copy, nonatomic) NSDate *userVisibleEndDate;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *modeIdentifier;
@property (copy, nonatomic) DNDModeAssertionLifetime *lifetime;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
