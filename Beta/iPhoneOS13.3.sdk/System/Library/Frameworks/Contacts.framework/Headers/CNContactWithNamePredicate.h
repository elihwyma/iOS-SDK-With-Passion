/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNPredicate.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNContactWithNamePredicate : CNPredicate

{
    NSString *_name;
    unsigned long long _options;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long options;

+ (_Bool)supportsSecureCoding;
+ (_Bool)doesPerson:(id)arg1 matchName:(id)arg2;
+ (id)descriptionForOptions:(unsigned long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)sgContactMatchesWithSortOrder:(long long)arg1 mutableObjects:(_Bool)arg2 service:(id)arg3 error:(id *)arg4;
- (id)contactsFromCLSDataStore:(id)arg1;
- (id)initWithName:(id)arg1 options:(unsigned long long)arg2;

@end
