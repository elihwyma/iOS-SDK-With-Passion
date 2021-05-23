/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class HKSource, NSSet, NSUUID;

@interface HKAuthorizationRequestRecord : NSObject

{
    HKSource *_source;
    NSUUID *_sessionIdentifier;
    NSSet *_typesRequiringShareAuthorization;
    NSSet *_typesRequiringReadAuthorization;
}

@property (copy, nonatomic, readonly) HKSource *source;
@property (copy, nonatomic, readonly) NSUUID *sessionIdentifier;
@property (copy, nonatomic, readonly) NSSet *typesRequiringShareAuthorization;
@property (copy, nonatomic, readonly) NSSet *typesRequiringReadAuthorization;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSource:(id)arg1 session:(id)arg2 readTypes:(id)arg3 writeTypes:(id)arg4;

@end
