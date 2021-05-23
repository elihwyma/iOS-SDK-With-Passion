/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <Foundation/NSObject.h>

@class CoreDAVResourceTypeItem, CoreDAVSupportedReportSetItem, NSDictionary, NSSet, NSString, NSURL;

@interface CoreDAVContainer : NSObject

{
    _Bool _isUnauthenticated;
    NSURL *_url;
    CoreDAVResourceTypeItem *_resourceType;
    NSString *_containerTitle;
    NSSet *_privileges;
    NSString *_pushKey;
    NSDictionary *_pushTransports;
    NSURL *_resourceID;
    CoreDAVSupportedReportSetItem *_supportedReportSetItem;
    NSString *_quotaAvailable;
    NSString *_quotaUsed;
    NSURL *_owner;
    NSURL *_addMemberURL;
    NSDictionary *_bulkRequests;
    NSString *_syncToken;
}

@property (retain, nonatomic) CoreDAVSupportedReportSetItem *supportedReportSetItem;
@property (retain, nonatomic) NSURL *url;
@property (nonatomic) _Bool isUnauthenticated;
@property (retain, nonatomic) CoreDAVResourceTypeItem *resourceType;
@property (retain, nonatomic) NSString *containerTitle;
@property (retain, nonatomic) NSSet *privileges;
@property (retain, nonatomic) NSString *pushKey;
@property (retain, nonatomic) NSDictionary *pushTransports;
@property (retain, nonatomic) NSURL *resourceID;
@property (retain, nonatomic) NSString *quotaAvailable;
@property (retain, nonatomic) NSString *quotaUsed;
@property (nonatomic, readonly) NSSet *supportedReports;
@property (retain, nonatomic) NSURL *owner;
@property (retain, nonatomic) NSURL *addMemberURL;
@property (retain, nonatomic) NSDictionary *bulkRequests;
@property (retain, nonatomic) NSString *syncToken;
@property (nonatomic, readonly) NSSet *resourceTypeAsStringSet;
@property (nonatomic, readonly) _Bool isPrincipal;
@property (nonatomic, readonly) NSSet *privilegesAsStringSet;
@property (nonatomic, readonly) _Bool hasReadPrivileges;
@property (nonatomic, readonly) _Bool hasWriteContentPrivileges;
@property (nonatomic, readonly) _Bool hasWritePropertiesPrivileges;
@property (nonatomic, readonly) _Bool hasBindPrivileges;
@property (nonatomic, readonly) _Bool hasUnbindPrivileges;
@property (nonatomic, readonly) NSSet *supportedReportsAsStringSet;
@property (nonatomic, readonly) _Bool supportsPrincipalPropertySearchReport;
@property (nonatomic, readonly) _Bool supportsSyncCollectionReport;

+ (id)copyPropertyMappingsForParser;
+ (id)convertPushTransportsForNSServerNotificationCenter:(id)arg1;

- (id)description;
- (id)initWithURL:(id)arg1 andProperties:(id)arg2;
- (void)applyParsedProperties:(id)arg1;
- (void)postProcessWithResponseHeaders:(id)arg1;
- (_Bool)_anyPrivilegesMatches:(CDUnknownBlockType)arg1;

@end
