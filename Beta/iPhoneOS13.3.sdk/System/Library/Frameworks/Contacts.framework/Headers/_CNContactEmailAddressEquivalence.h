/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _CNContactEmailAddressEquivalence : NSObject

{
    NSString *_rawString;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)indexKeyForString:(id)arg1;

- (id)initWithEmailAddress:(id)arg1;
- (_Bool)isEquivalentToString:(id)arg1 strict:(_Bool *)arg2;

@end
