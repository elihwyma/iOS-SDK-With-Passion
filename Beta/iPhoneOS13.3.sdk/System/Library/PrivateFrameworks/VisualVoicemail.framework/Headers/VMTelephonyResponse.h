/*
 Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

#import <Foundation/NSObject.h>

@class NSError, NSString;

@protocol VMTelephonySubscription;

@interface VMTelephonyResponse : NSObject

{
    NSError *_error;
    id <VMTelephonySubscription> _subscription;
}

@property (retain, nonatomic) NSError *error;
@property (nonatomic, readonly) id <VMTelephonySubscription> subscription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)unarchivedObjectClasses;
+ (id)unarchivedObjectFromData:(id)arg1 error:(id *)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)archivedDataWithError:(id *)arg1;
- (_Bool)isEqualToResponse:(id)arg1;
- (id)initWithSubscription:(id)arg1 error:(id)arg2;

@end
