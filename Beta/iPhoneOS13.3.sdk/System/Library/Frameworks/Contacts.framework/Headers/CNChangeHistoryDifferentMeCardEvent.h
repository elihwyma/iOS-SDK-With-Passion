/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNChangeHistoryEvent.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNChangeHistoryDifferentMeCardEvent : CNChangeHistoryEvent

{
    NSString *_contactIdentifier;
}

@property (nonatomic, readonly) NSString *contactIdentifier;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContactIdentifier:(id)arg1;
- (void)acceptEventVisitor:(id)arg1;

@end
