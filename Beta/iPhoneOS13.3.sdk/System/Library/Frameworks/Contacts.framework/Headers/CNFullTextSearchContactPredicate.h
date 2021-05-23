/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNPredicate.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNFullTextSearchContactPredicate : CNPredicate

{
    NSString *_searchString;
    NSArray *_containerIdentifiers;
    NSArray *_groupIdentifiers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *searchString;
@property (copy, nonatomic, readonly) NSArray *containerIdentifiers;
@property (copy, nonatomic, readonly) NSArray *groupIdentifiers;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)sgContactMatchesWithSortOrder:(long long)arg1 mutableObjects:(_Bool)arg2 service:(id)arg3 error:(id *)arg4;
- (id)initWithSearchString:(id)arg1 containerIdentifiers:(id)arg2 groupIdentifiers:(id)arg3;

@end
