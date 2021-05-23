/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class CNMutableContact, NSString;

__attribute__((visibility("hidden")))
@interface CNContactVCardParsedResultBuilder : NSObject

{
    CNMutableContact *_contact;
    _Bool _empty;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)contactKeyForVCardKey:(id)arg1;
+ (CDUnknownBlockType)contactValueTransformForVCardKey:(id)arg1;
+ (id)labeledValuesWithValues:(id)arg1 transform:(CDUnknownBlockType)arg2 labels:(id)arg3 isPrimaries:(id)arg4;

- (id)init;
- (id)build;
- (id)valueForProperty:(id)arg1;
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;
- (long long)personFlags;
- (_Bool)setPersonFlags:(long long)arg1;
- (long long)contactTypeFromPersonFlags:(long long)arg1;
- (long long)personFlagsByAddingContactType:(long long)arg1 toFlags:(long long)arg2;
- (_Bool)canSetValueForProperty:(id)arg1;
- (_Bool)setValues:(id)arg1 labels:(id)arg2 isPrimaries:(id)arg3 forProperty:(id)arg4;
- (_Bool)setImageData:(id)arg1 forReference:(id)arg2 clipRects:(id)arg3;
- (void)setUnknownProperties:(id)arg1;
- (id)validCountryCodes;

@end
