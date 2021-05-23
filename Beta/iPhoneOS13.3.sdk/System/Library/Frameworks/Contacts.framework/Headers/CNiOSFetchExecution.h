/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNiOSFetchExecution : NSObject

+ (id)contactsMatchingPredicates:(id)arg1 sortOrdering:(unsigned int)arg2 matchInfos:(id *)arg3 options:(unsigned long long)arg4 addressBook:(void *)arg5 environment:(id)arg6 error:(id *)arg7;
+ (id)contactsMatchingPredicates:(id)arg1 sortOrdering:(unsigned int)arg2 options:(unsigned long long)arg3 addressBook:(void *)arg4 progressiveResults:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6 environment:(id)arg7;
+ (void)_extractContacts:(id *)arg1 matchInfo:(id *)arg2 fromBlockResults:(id)arg3 containsNestedResults:(_Bool)arg4;

@end
