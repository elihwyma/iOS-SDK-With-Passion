/*
 Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
 */

#import <Foundation/NSObject.h>

@class FPProviderDomain, NSArray, NSString, UIImage;

@interface DOCDocumentSource : NSObject

{
    _Bool _hasTemplateIcon;
    _Bool _hidden;
    NSString *_displayName;
    NSString *_providerName;
    NSString *_domainName;
    UIImage *_icon;
    NSString *_promptText;
    NSString *_identifier;
    NSArray *_documentTypes;
    FPProviderDomain *_searching_fileProviderDomain;
}

@property (copy) NSArray *documentTypes;
@property (copy) NSString *displayName;
@property (copy) NSString *providerName;
@property (copy) NSString *domainName;
@property (retain) UIImage *icon;
@property (copy) NSString *identifier;
@property (copy) NSString *promptText;
@property _Bool hasTemplateIcon;
@property _Bool hidden;
@property FPProviderDomain *searching_fileProviderDomain;
@property (nonatomic, readonly) NSArray *supportedSearchFilters;
@property (readonly) _Bool isAvailableSystemWide;
@property (readonly) unsigned long long status;
@property (readonly) _Bool appearsInMoveUI;
@property (readonly) _Bool isiCloudBased;

+ (_Bool)supportsSecureCoding;
+ (void)endSearchingSources:(id)arg1;
+ (id)startSearchingSourcesForBundleIdentifier:(id)arg1 updateBlock:(CDUnknownBlockType)arg2;
+ (void)defaultSourceForBundleIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (void)setDefaultSource:(id)arg1 forBundleIdentifier:(id)arg2;
+ (id)defaultSourceIdentifierForBundleIdentifier:(id)arg1;
+ (void)defaultSourceForBundleIdentifier:(id)arg1 selectedSourceIdentifier:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (void)setDefaultSourceIdentifier:(id)arg1 forBundleIdentifier:(id)arg2;
+ (id)defaultSourceForBundleIdentifier:(id)arg1 defaultSourceIdentifier:(id)arg2 sources:(id)arg3;
+ (id)sourceIdentifierOrderWithDefault:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)sanitizedSource;
- (_Bool)usesEnumeration;
- (_Bool)isValidForConfiguration:(id)arg1;

@end
