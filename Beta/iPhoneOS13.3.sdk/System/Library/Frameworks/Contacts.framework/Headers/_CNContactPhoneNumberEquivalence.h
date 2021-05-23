/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _CNContactPhoneNumberEquivalence : NSObject

{
    NSString *_rawString;
    struct {
        char *_field1;
        char *_field2;
        char *_field3;
        unsigned int _field4;
        char *_field5;
        unsigned int _field6;
        char *_field7;
        unsigned int _field8;
    } *_decomposedRepresentation;
    char *_decomposedNumberDigits;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)indexKeyForString:(id)arg1;

- (void)dealloc;
- (_Bool)isEquivalentToString:(id)arg1 strict:(_Bool *)arg2;
- (id)initWithPhoneNumberString:(id)arg1;
- (_Bool)isRawStringEquivalent:(id)arg1;
- (_Bool)preparePhoneNumberRepresentation;
- (_Bool)isPhoneNumberEquivalent:(id)arg1 strict:(_Bool *)arg2;

@end
