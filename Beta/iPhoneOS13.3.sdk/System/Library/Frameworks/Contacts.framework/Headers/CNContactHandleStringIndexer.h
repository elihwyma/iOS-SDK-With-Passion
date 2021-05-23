/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class CNCache, NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface CNContactHandleStringIndexer : NSObject

{
    CNCache *_indexImpl;
    NSArray *_targetHandleStrings;
}

@property (nonatomic, readonly) CNCache *indexImpl;
@property (nonatomic, readonly) NSArray *targetHandleStrings;
@property (nonatomic, readonly) NSDictionary *index;

+ (id)indexByMatchingIndexWithRawHandles:(id)arg1 toTargetHandleStrings:(id)arg2;

- (id)init;
- (id)description;
- (id)initWithTargetHandleStrings:(id)arg1;
- (id)indexWithRawHandles;
- (void)indexContact:(id)arg1;
- (void)indexEmailAddressesOnContact:(id)arg1;
- (void)indexPhoneNumbersOnContact:(id)arg1;
- (void)indexContacts:(id)arg1;

@end
