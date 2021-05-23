/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <Foundation/NSObject.h>

@class MCBook, NSArray, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface MCPayloadInfo : NSObject

{
    _Bool _showIcon;
    _Bool _hasDetails;
    _Bool _isCertificate;
    _Bool _isManagedAppPayload;
    _Bool _isManagedBookPayload;
    NSArray *_typeStrings;
    NSString *_localizedSingularForm;
    NSString *_localizedPluralForm;
    NSArray *_payloadDescriptionKeyValueSections;
    NSString *_friendlyName;
    NSString *_title;
    NSString *_subtitle1Label;
    NSString *_subtitle1Description;
    NSString *_subtitle2Label;
    NSString *_subtitle2Description;
    NSString *_managedAppID;
    MCBook *_managedBook;
    NSArray *_certificateProperties;
    NSDate *_certificateExpirationDate;
    long long _type;
}

@property (retain, nonatomic) NSArray *typeStrings;
@property (retain, nonatomic) NSString *localizedSingularForm;
@property (retain, nonatomic) NSString *localizedPluralForm;
@property (retain, nonatomic) NSArray *payloadDescriptionKeyValueSections;
@property (retain, nonatomic) NSString *friendlyName;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle1Label;
@property (retain, nonatomic) NSString *subtitle1Description;
@property (retain, nonatomic) NSString *subtitle2Label;
@property (retain, nonatomic) NSString *subtitle2Description;
@property (nonatomic) _Bool showIcon;
@property (nonatomic) _Bool hasDetails;
@property (nonatomic) _Bool isCertificate;
@property (nonatomic) _Bool isManagedAppPayload;
@property (nonatomic) _Bool isManagedBookPayload;
@property (retain, nonatomic) NSString *managedAppID;
@property (retain, nonatomic) MCBook *managedBook;
@property (retain, nonatomic) NSArray *certificateProperties;
@property (retain, nonatomic) NSDate *certificateExpirationDate;
@property (nonatomic) long long type;

+ (id)accountPayloadClasses;
+ (id)managedAppClasses;
+ (id)managedBookClasses;
+ (id)restrictionPayloadClasses;
+ (long long)payloadInfoTypeForPayloadClass:(Class)arg1;
+ (id)payloadInfosFromPayload:(id)arg1;
+ (id)removeDuplicatesFromRestrictionPayloadInfos:(id)arg1;

- (id)initWithPayload:(id)arg1;
- (id)initWithManagedAppID:(id)arg1;
- (id)initWithManagedBook:(id)arg1;

@end
