/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class NSSet;

@interface CNUICoreContactScratchpad : NSObject

{
    NSSet *_edits;
}

@property (nonatomic, readonly) NSSet *edits;
@property (nonatomic, readonly) NSSet *allContacts;
@property (nonatomic, readonly) NSSet *modifiedContacts;

+ (id)scratchpadBySettingModifiedContact:(id)arg1 onExistingEditInScratchpad:(id)arg2;
+ (id)scratchpadByAddingUneditedContact:(id)arg1 toScratchpad:(id)arg2;
+ (id)scratchpadByRemovingModifiedContact:(id)arg1 fromScratchpad:(id)arg2;
+ (id)editMatchingContact:(id)arg1 inEdits:(id)arg2;
+ (id)editsByReplacingEdit:(id)arg1 withUpdatedEdit:(id)arg2 inEdits:(id)arg3;
+ (id)emptyScratchpad;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithEdits:(id)arg1;
- (_Bool)containsContact:(id)arg1;
- (id)scratchpadByRemovingContacts:(id)arg1;
- (id)scratchpadByAddingContacts:(id)arg1;
- (id)modifiedContactForContact:(id)arg1;
- (id)scratchpadByKeepingContacts:(id)arg1;
- (id)modifiedIfPresentOtherwiseOriginalContactForContact:(id)arg1;

@end
