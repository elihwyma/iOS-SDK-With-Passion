/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

#import <Contacts/Swift-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNLabelValuePair : NSObject <Swift>

{
    NSString *_label;
    id _value;
}

@property (readonly) NSString *label;
@property (readonly) id value;

+ (id)labeledValueWithLabel:(id)arg1 value:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLabel:(id)arg1 value:(id)arg2;

@end
