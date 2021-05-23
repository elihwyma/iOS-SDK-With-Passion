/*
 Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

#import <Search/SPSearchEntity.h>

@class CNContact, NSString;

__attribute__((visibility("hidden")))
@interface SPContactSearchEntity : SPSearchEntity

{
    CNContact *_contact;
    NSString *_contactIdentifier;
}

@property (retain) NSString *contactIdentifier;

+ (_Bool)supportsSecureCoding;
+ (id)contactStore;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)contact;
- (id)initWithContactIdentifier:(id)arg1;
- (id)queryString;
- (_Bool)isPeopleSearch;
- (_Bool)isScopedAppSearch;
- (id)tokenText;
- (void)appendToQuery:(id)arg1 key:(id)arg2 value:(id)arg3 additions:(id)arg4;

@end
