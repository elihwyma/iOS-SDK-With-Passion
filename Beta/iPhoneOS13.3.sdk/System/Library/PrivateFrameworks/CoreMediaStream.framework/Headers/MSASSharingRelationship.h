/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSString;

@interface MSASSharingRelationship : NSObject

{
    _Bool _isMine;
    int _state;
    NSString *_GUID;
    NSString *_albumGUID;
    NSString *_email;
    NSArray *_emails;
    NSArray *_phones;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_fullName;
    NSString *_personID;
    NSDate *_subscriptionDate;
}

@property (retain, nonatomic) NSString *GUID;
@property (retain, nonatomic) NSString *albumGUID;
@property (retain, nonatomic) NSString *email;
@property (retain, nonatomic) NSArray *emails;
@property (retain, nonatomic) NSArray *phones;
@property (retain, nonatomic) NSString *fullName;
@property (retain, nonatomic) NSString *firstName;
@property (retain, nonatomic) NSString *lastName;
@property (retain, nonatomic) NSString *personID;
@property (retain, nonatomic) NSDate *subscriptionDate;
@property (nonatomic) int state;
@property (nonatomic) _Bool isMine;

+ (_Bool)supportsSecureCoding;
+ (id)MSASPSharingRelationshipFromProtocolDictionary:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_fullName;
- (_Bool)isEqualToSharingRelationship:(id)arg1;

@end
