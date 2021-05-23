/*
 Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

#import <VisualVoicemail/VMTelephonyRequest.h>

@class NSString;

@interface VMCarrierStateRequest : VMTelephonyRequest

{
    NSString *_destination;
    long long _identifier;
    NSString *_message;
    NSString *_serviceCenter;
}

@property (copy, nonatomic, readonly) NSString *destination;
@property (nonatomic, readonly) long long identifier;
@property (copy, nonatomic, readonly) NSString *message;
@property (copy, nonatomic, readonly) NSString *serviceCenter;

+ (_Bool)supportsSecureCoding;
+ (id)unarchivedObjectClasses;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubscription:(id)arg1;
- (id)initWithSubscription:(id)arg1 destination:(id)arg2 serviceCenter:(id)arg3;
- (_Bool)isEqualToStateRequest:(id)arg1;

@end
