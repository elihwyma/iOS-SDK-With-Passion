/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNAbstractActivityAlertDescription.h>

@class NSString;

@interface CNTextAlertDescription : CNAbstractActivityAlertDescription

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)CNValueForContact:(id)arg1;
- (_Bool)isEqualForContact:(id)arg1 other:(id)arg2;
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;
- (void)setCNValue:(id)arg1 onContact:(id)arg2;
- (_Bool)abPropertyID:(int *)arg1;
- (_Bool)applyABMultivalueValueBytes:(char *)arg1 length:(unsigned long long)arg2 identifier:(id)arg3 legacyIdentifier:(int)arg4 label:(id)arg5 toCNMultivalueRepresentation:(id)arg6;
- (void *)ABValueForABPerson:(void *)arg1;
- (_Bool)setABValue:(void *)arg1 onABPerson:(void *)arg2 error:(struct __CFError **)arg3;

@end
