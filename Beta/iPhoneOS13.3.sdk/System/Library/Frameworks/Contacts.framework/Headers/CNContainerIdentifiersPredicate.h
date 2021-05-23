/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNPredicate.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNContainerIdentifiersPredicate : CNPredicate

{
    NSArray *_identifiers;
}

@property (copy, nonatomic, readonly) NSArray *identifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithIdentifiers:(id)arg1;
- (id)cn_coreDataPredicate;
- (id)cn_topLevelFilter;
- (id)cn_persistenceFilterRequest;

@end
