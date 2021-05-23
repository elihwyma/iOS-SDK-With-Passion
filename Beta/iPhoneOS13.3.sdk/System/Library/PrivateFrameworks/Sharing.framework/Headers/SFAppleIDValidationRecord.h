/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSDate, NSNumber, NSString;

@interface SFAppleIDValidationRecord : NSObject

{
    NSString *_altDSID;
    NSData *_data;
    NSString *_identifier;
    NSDate *_nextCheckDate;
    unsigned long long _suggestedValidDuration;
    NSArray *_validatedEmailHashes;
    NSArray *_validatedPhoneHashes;
    NSDate *_validStartDate;
    NSNumber *_version;
}

@property (retain, nonatomic) NSString *altDSID;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic, readonly) _Bool isInvalid;
@property (nonatomic, readonly) _Bool needsUpdate;
@property (retain, nonatomic) NSDate *nextCheckDate;
@property (nonatomic) unsigned long long suggestedValidDuration;
@property (retain, nonatomic) NSArray *validatedEmailHashes;
@property (retain, nonatomic) NSArray *validatedPhoneHashes;
@property (retain, nonatomic) NSDate *validStartDate;
@property (retain, nonatomic) NSNumber *version;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)expirationDate;
- (_Bool)isEqualToValidationRecord:(id)arg1;

@end
