/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNMultiValuePropertyDescription.h>

@class CNContactRelationsDescriptionLabels, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface CNContactRelationsDescription : CNMultiValuePropertyDescription

{
    NSObject<OS_dispatch_queue> *_generationQueue;
    CNContactRelationsDescriptionLabels *_cachedLabels;
    Class _provider;
}

@property (readonly) NSObject<OS_dispatch_queue> *generationQueue;
@property (retain, nonatomic) CNContactRelationsDescriptionLabels *cachedLabels;
@property (nonatomic, readonly) Class provider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void *)ABMultiValueValueFromCNLabeledValueValue:(id)arg1;
- (_Bool)isNonnull;
- (id)managedLabels;
- (id)localizedStringForLabel:(id)arg1;
- (id)CNValueForContact:(id)arg1;
- (_Bool)isEqualForContact:(id)arg1 other:(id)arg2;
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;
- (void)setCNValue:(id)arg1 onContact:(id)arg2;
- (_Bool)canUnifyValue:(id)arg1 withValue:(id)arg2;
- (CDUnknownBlockType)fromPlistTransform;
- (id)standardLabels;
- (Class)labeledValueClass;
- (CDUnknownBlockType)plistTransform;
- (id)initWithLocalizationProvider:(Class)arg1;
- (id)_builtInStandardLabels;
- (void)_addLocalizedLabels:(id)arg1 fromLanguagePlist:(id)arg2 languageIdentifier:(id)arg3 toDictionary:(id)arg4 conflictInfo:(id)arg5;
- (id)_builtInExtendedLabels;
- (id)labelsForPreferredLanguages:(id)arg1;
- (id)cachedLabelsForPreferredLanguages:(id)arg1;
- (id)standardLabelsWithOptions:(unsigned long long)arg1;
- (_Bool)abPropertyID:(int *)arg1;
- (id)CNLabeledValueValueFromABMultiValueValueBytes:(char *)arg1 length:(unsigned long long)arg2;
- (id)CNLabeledValueValueFromABMultiValueValue:(void *)arg1;

@end
