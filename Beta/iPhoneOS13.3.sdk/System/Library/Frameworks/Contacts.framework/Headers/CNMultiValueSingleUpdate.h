/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNMultiValueUpdate.h>

@class CNLabeledValue;

__attribute__((visibility("hidden")))
@interface CNMultiValueSingleUpdate : CNMultiValueUpdate

{
    CNLabeledValue *_value;
}

@property (nonatomic, readonly) CNLabeledValue *value;

- (id)description;
- (id)initWithValue:(id)arg1;

@end
