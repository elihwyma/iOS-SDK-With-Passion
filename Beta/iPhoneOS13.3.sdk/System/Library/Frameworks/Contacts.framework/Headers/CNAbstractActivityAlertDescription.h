/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNPropertyDescription.h>

@class NSString;

@interface CNAbstractActivityAlertDescription : CNPropertyDescription

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (Class)valueClass;
- (_Bool)canUnifyValue:(id)arg1 withValue:(id)arg2;
- (void *)ABValueFromCNValue:(id)arg1;
- (id)CNValueFromABValue:(void *)arg1;
- (id)CNMutableValueForABMultivalue;

@end
