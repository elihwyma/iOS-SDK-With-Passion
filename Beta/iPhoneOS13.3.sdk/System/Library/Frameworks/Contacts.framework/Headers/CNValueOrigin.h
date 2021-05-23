/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

#import <Contacts/Swift-Protocol.h>

@class NSString;

@interface CNValueOrigin : NSObject <Swift>

{
    NSString *_localizedApplicationName;
    NSString *_donationIdentifier;
}

@property (copy, nonatomic, readonly) NSString *localizedApplicationName;
@property (copy, nonatomic, readonly) NSString *donationIdentifier;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalizedApplicationName:(id)arg1 donationIdentifier:(id)arg2;

@end
