/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

#import <NSObject.h>

@class DNDModeAssertionLifetime, NSDate, NSString;

@interface DNDModeAssertionDetails : NSObject

{
    NSString *_identifier;
    NSString *_modeIdentifier;
    DNDModeAssertionLifetime *_lifetime;
    NSDate *_userVisibleEndDate;
}

@property (nonatomic, readonly, getter=isUserRequested) _Bool userRequested;
@property (copy, nonatomic, readonly) NSDate *userVisibleEndDate;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *modeIdentifier;
@property (copy, nonatomic, readonly) DNDModeAssertionLifetime *lifetime;

+ (_Bool)supportsSecureCoding;
+ (id)detailsWithIdentifier:(id)arg1 modeIdentifier:(id)arg2 lifetime:(id)arg3;
+ (id)userRequestedAssertionDetailsWithIdentifier:(id)arg1 modeIdentifier:(id)arg2 lifetime:(id)arg3;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithDetails:(id)arg1;
- (id)_initWithIdentifier:(id)arg1 modeIdentifier:(id)arg2 lifetime:(id)arg3 userVisibleEndDate:(id)arg4;

@end
