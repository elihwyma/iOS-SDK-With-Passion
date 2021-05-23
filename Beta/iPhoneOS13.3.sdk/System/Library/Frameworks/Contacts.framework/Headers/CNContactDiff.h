/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CNContactDiff : NSObject

{
    NSArray *_updates;
}

@property (copy, readonly) NSArray *updates;

+ (id)diffContact:(id)arg1 to:(id)arg2 error:(id *)arg3;

- (id)description;
- (id)initWithUpdates:(id)arg1;
- (_Bool)applyToABPerson:(void *)arg1 logger:(id)arg2 error:(id *)arg3;
- (void)applyToMutableContact:(id)arg1 withIdentifierMap:(id)arg2;
- (id)contactByApplyingUpdatesToContact:(id)arg1;
- (void)applyToMutableContacts:(id)arg1 withIdentifierMap:(id)arg2;

@end
