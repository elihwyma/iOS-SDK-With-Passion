/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSFormatter, NSString;

@interface HFAccessorySettingsEntity : NSObject

{
    _Bool _requiresDependenciesToShowSetting;
    _Bool _previewAccessory;
    _Bool _alwaysShowGroup;
    _Bool _wantsSeparateSectionPerGroup;
    _Bool _showInSeperateSection;
    _Bool _isSoftwareVersionNeeded;
    NSString *_keyPath;
    NSString *_sortKey;
    NSString *_localizedHeader;
    NSString *_localizedFooter;
    NSString *_overrideLocalizedTitleKey;
    NSArray *_booleanKeyPathDependencies;
    NSDictionary *_userInfo;
    long long _interfaceModality;
    NSString *_previewValueKeyPath;
    NSFormatter *_previewValueFormatter;
    NSFormatter *_footerTitleFormatter;
    NSString *_adapterIdentifier;
}

@property (copy, nonatomic, readonly) NSString *keyPath;
@property (copy, nonatomic, readonly) NSString *sortKey;
@property (copy, nonatomic, readonly) NSString *localizedHeader;
@property (copy, nonatomic, readonly) NSString *localizedFooter;
@property (copy, nonatomic, readonly) NSString *overrideLocalizedTitleKey;
@property (copy, nonatomic, readonly) NSArray *booleanKeyPathDependencies;
@property (copy, nonatomic, readonly) NSDictionary *userInfo;
@property (nonatomic, readonly) long long interfaceModality;
@property (nonatomic, readonly) _Bool requiresDependenciesToShowSetting;
@property (nonatomic, readonly) _Bool previewAccessory;
@property (copy, nonatomic, readonly) NSString *previewValueKeyPath;
@property (copy, nonatomic, readonly) NSFormatter *previewValueFormatter;
@property (copy, nonatomic, readonly) NSFormatter *footerTitleFormatter;
@property (nonatomic, readonly) _Bool alwaysShowGroup;
@property (nonatomic, readonly) _Bool wantsSeparateSectionPerGroup;
@property (copy, nonatomic, readonly) NSString *adapterIdentifier;
@property (nonatomic, readonly) _Bool showInSeperateSection;
@property (nonatomic, readonly) _Bool isSoftwareVersionNeeded;

+ (id)settingsAtURL:(id)arg1 error:(id *)arg2;

- (id)description;
- (id)initWithDictionary:(id)arg1;

@end
