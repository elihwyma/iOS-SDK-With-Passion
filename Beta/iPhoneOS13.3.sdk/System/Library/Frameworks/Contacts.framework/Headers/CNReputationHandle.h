/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

#import <Contacts/Swift-Protocol.h>

@class NSString;

@interface CNReputationHandle : NSObject <Swift>

{
    NSString *_stringValue;
    long long _type;
}

@property (copy, nonatomic, readonly) NSString *stringValue;
@property (nonatomic, readonly) long long type;

+ (id)descriptionForType:(long long)arg1;
+ (id)handleWithStringValue:(id)arg1;
+ (id)handleWithEmailAddress:(id)arg1;
+ (id)handleWithPhoneNumber:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)configureBuilder:(id)arg1;
- (id)initWithStringValue:(id)arg1 type:(long long)arg2;

@end
