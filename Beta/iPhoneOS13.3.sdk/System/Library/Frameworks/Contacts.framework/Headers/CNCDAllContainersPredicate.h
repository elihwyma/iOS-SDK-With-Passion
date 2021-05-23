/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNPredicate.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNCDAllContainersPredicate : CNPredicate

{
    _Bool _includeDisabledContainers;
}

@property (nonatomic) _Bool includeDisabledContainers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)cn_coreDataPredicate;
- (id)cn_topLevelFilter;
- (id)cn_persistenceFilterRequest;
- (id)initWithIncludeDisabledContainers:(_Bool)arg1;

@end
