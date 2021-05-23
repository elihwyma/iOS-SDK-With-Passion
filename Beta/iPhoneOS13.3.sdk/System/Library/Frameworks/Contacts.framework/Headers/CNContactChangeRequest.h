/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

#import <Contacts/Swift-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNContactChangeRequest : NSObject <Swift>

{
    NSArray *_contacts;
    long long _kind;
    NSString *_linkIdentifier;
}

@property (copy, nonatomic, readonly) NSArray *contacts;
@property (copy, nonatomic, readonly) NSArray *contactIdentifiers;
@property (nonatomic, readonly) long long kind;
@property (copy, nonatomic, readonly) NSString *linkIdentifier;

+ (_Bool)supportsSecureCoding;
+ (id)contactChangeRequestWithKind:(long long)arg1 contacts:(id)arg2 linkIdentifier:(id)arg3;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKind:(long long)arg1 contacts:(id)arg2 linkIdentifier:(id)arg3;

@end
