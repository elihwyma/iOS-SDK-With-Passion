/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNPredicate.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CNHandleStringsContactPredicate : CNPredicate

{
    NSArray *_handleStrings;
    NSArray *_containerIdentifiers;
}

@property (copy, nonatomic, readonly) NSArray *handleStrings;
@property (copy, nonatomic, readonly) NSArray *containerIdentifiers;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)shortDebugDescription;
- (CDUnknownBlockType)cn_resultTransformWithMatchInfos:(id)arg1;
- (id)initWithHandleStrings:(id)arg1 containerIdentifiers:(id)arg2;
- (id)initWithHandleStrings:(id)arg1;

@end
