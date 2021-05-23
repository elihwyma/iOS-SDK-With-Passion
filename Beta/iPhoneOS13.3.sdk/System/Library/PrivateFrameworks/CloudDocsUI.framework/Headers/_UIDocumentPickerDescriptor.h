/*
 Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSExtension, NSString;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerDescriptor : NSObject

{
    _Bool _newlyAdded;
    NSExtension *_extension;
}

@property (retain, nonatomic) NSExtension *extension;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *localizedName;
@property (copy, nonatomic, readonly) NSArray *supportedContentTypes;
@property (nonatomic) _Bool enabled;
@property (nonatomic, getter=isNewlyAdded) _Bool newlyAdded;
@property (copy, nonatomic, readonly) NSString *nonUIIdentifier;
@property (retain, nonatomic, readonly) NSString *fileProviderDocumentGroup;

+ (_Bool)isContentManaged;
+ (void)setIsContentManaged:(_Bool)arg1;
+ (void)setHostAuditToken:(CDStruct_6ad76789)arg1;
+ (CDStruct_6ad76789)hostAuditToken;
+ (BOOL)cloudEnabledStatus;
+ (BOOL)cloudMigrationStatus;
+ (id)manageablePickersForMode:(unsigned long long)arg1 documentTypes:(id)arg2;
+ (id)allPickers;
+ (void)setOrderFromPickers:(id)arg1;
+ (id)hostBundleID;
+ (_Bool)isInAddToiCloudDrive;
+ (id)pickerOrder;
+ (id)allPickersForMode:(unsigned long long)arg1 documentTypes:(id)arg2;
+ (id)filteredPickersForPickers:(id)arg1 filter:(unsigned long long)arg2;
+ (id)enabledPickersForMode:(unsigned long long)arg1 documentTypes:(id)arg2;
+ (void)__updateCloudEnabledStatus;
+ (void)_ubiquityIdentityTokenDidChange:(id)arg1;
+ (void)_updateCloudEnabledStatus;
+ (void)setHostBundleID:(id)arg1;
+ (id)defaultPickerIdentifierForMode:(unsigned long long)arg1 documentTypes:(id)arg2;
+ (id)descriptorWithIdentifier:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (long long)compare:(id)arg1;
- (id)imageWithScale:(double)arg1;
- (_Bool)pickerEnabledForMode:(unsigned long long)arg1 documentTypes:(id)arg2 reason:(id *)arg3;
- (_Bool)supportsPickerMode:(unsigned long long)arg1;
- (id)_extensionValueOfClass:(Class)arg1 forKey:(id)arg2;
- (id)_ownBundle;
- (id)_parentApp;
- (id)nonUIBundle;

@end
