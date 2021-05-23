/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class PDScheduledActivityCriteria;

@protocol NSObject><NSSecureCoding;

@interface PDScheduledActivityRegistration : NSObject <Swift>

{
    PDScheduledActivityCriteria *_activityCriteria;
    id <NSObject><NSSecureCoding> _activityContext;
}

@property (nonatomic, readonly) PDScheduledActivityCriteria *activityCriteria;
@property (nonatomic, readonly) id <NSObject><NSSecureCoding> activityContext;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToScheduledActivityRegistration:(id)arg1;
- (id)initWithActivityCriteria:(id)arg1 activityContext:(id)arg2;

@end
