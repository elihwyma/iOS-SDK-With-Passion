/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

#import <TelephonyUtilities/Swift-Protocol.h>

@class NSDictionary, NSString;

@interface TUHandle : NSObject <Swift>

{
    long long _type;
    NSString *_value;
}

@property (copy, nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *value;

+ (_Bool)supportsSecureCoding;
+ (id)stringForType:(long long)arg1;
+ (id)handleWithDestinationID:(id)arg1;
+ (id)handleForCHHandle:(id)arg1;
+ (id)handleWithDictionaryRepresentation:(id)arg1;
+ (id)handleWithPersonHandle:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)personHandle;
- (_Bool)isEqualToHandle:(id)arg1;
- (id)initWithType:(long long)arg1 value:(id)arg2;
- (id)canonicalHandleForISOCountryCode:(id)arg1;
- (_Bool)isCanonicallyEqualToHandle:(id)arg1 isoCountryCode:(id)arg2;
- (id)initWithDestinationID:(id)arg1;
- (_Bool)isValidForISOCountryCode:(id)arg1;

@end
