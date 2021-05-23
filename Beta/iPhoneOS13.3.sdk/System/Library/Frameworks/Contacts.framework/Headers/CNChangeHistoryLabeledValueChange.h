/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

#import <Contacts/Swift-Protocol.h>

@class NSString;

@interface CNChangeHistoryLabeledValueChange : NSObject <Swift>

{
    NSString *_contactIdentifier;
    NSString *_propertyKey;
    NSString *_labeledValueIdentifier;
    long long _changeType;
}

@property (nonatomic, readonly) NSString *contactIdentifier;
@property (copy, nonatomic, readonly) NSString *propertyKey;
@property (nonatomic, readonly) NSString *labeledValueIdentifier;
@property (nonatomic, readonly) long long changeType;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContactIdentifier:(id)arg1 propertyKey:(id)arg2 labeledValueIdentifier:(id)arg3 changeType:(long long)arg4;

@end
