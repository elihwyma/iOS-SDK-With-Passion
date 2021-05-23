/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKObject.h>

@class EKCalendar, NSPredicate, NSString;

@interface EKSharee : EKObject

@property (copy, nonatomic) NSString *name;
@property (nonatomic, readonly) NSString *emailAddress;
@property (nonatomic, readonly) NSString *phoneNumber;
@property (nonatomic) unsigned long long shareeStatus;
@property (nonatomic) unsigned long long shareeAccessLevel;
@property (nonatomic, readonly) NSPredicate *contactPredicate;
@property (nonatomic, readonly) NSString *UUID;
@property (copy, nonatomic) NSString *address;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSString *externalID;
@property (nonatomic, readonly) EKCalendar *owner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)shareeWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3;
+ (id)shareeWithName:(id)arg1 url:(id)arg2;
+ (id)shareeWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3 externalID:(id)arg4;
+ (Class)frozenClass;
+ (id)_urlForEmailAddress:(id)arg1 andPhoneNumber:(id)arg2;
+ (unsigned long long)_ekShareeStatusFromCalShareeStatus:(int)arg1;
+ (int)_calShareeStatusFromEKShareeStatus:(unsigned long long)arg1;
+ (unsigned long long)_ekShareeAccessLevelFromCalShareeAccessLevel:(int)arg1;
+ (int)_calShareeAccessLevelFromEKShareeAccessLevel:(unsigned long long)arg1;
+ (id)shareeWithName:(id)arg1 emailAddress:(id)arg2;
+ (id)shareeWithName:(id)arg1 phoneNumber:(id)arg2;
+ (unsigned long long)statusEnumFromString:(id)arg1;
+ (id)statusStringFromEnum:(unsigned long long)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setUUID:(id)arg1;
- (id)URL;
- (void)setPhoneNumber:(id)arg1;
- (void)setEmailAddress:(id)arg1;
- (id)initWithName:(id)arg1 url:(id)arg2;
- (id)initWithName:(id)arg1 url:(id)arg2 externalID:(id)arg3;
- (int)shareeStatusRaw;
- (void)setShareeStatusRaw:(int)arg1;
- (int)shareeAccessLevelRaw;
- (void)setShareeAccessLevelRaw:(int)arg1;

@end
