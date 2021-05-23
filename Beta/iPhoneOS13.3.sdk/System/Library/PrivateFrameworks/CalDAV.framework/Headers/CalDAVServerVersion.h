/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString;

@interface CalDAVServerVersion : NSObject

{
    _Bool _supportsTimeRangeFilter;
    _Bool _supportsTimeRangeFilterWithoutEndDate;
    _Bool _supportsTimeRangeFilterOnInbox;
    _Bool _supportsAutoSchedule;
    _Bool _supportsPrivateComments;
    _Bool _supportsLikenessPropagation;
    _Bool _supportsSharing;
    _Bool _supportsSharingNoScheduling;
    _Bool _supportsCalendarProxy;
    _Bool _supportsInboxAvailability;
    _Bool _supportsPrivateEvents;
    _Bool _supportsSubscriptionCalendars;
    _Bool _supportsPrincipalPropertySearch;
    _Bool _supportsExtendedCalendarQuery;
    _Bool _supportsRequestCompression;
    _Bool _supportsManagedAttachments;
    _Bool _supportsCheckForValidEmail;
    _Bool _supportsChecksumming;
    _Bool _supportsCalendarHomeSync;
    _Bool _supportsCalendarNoTimezone;
    _Bool _supportsCalendarRecurrenceSplit;
    _Bool _alwaysSupportsFreebusyOnOutbox;
    _Bool _supportsCalendarAudit;
    _Bool _supportsTelephone;
    double _version;
    NSString *_supportedCalendarComponentSets;
    NSSet *_complianceClasses;
    NSString *_serverHeader;
}

@property (nonatomic) double version;
@property (nonatomic) _Bool supportsTimeRangeFilter;
@property (nonatomic) _Bool supportsTimeRangeFilterWithoutEndDate;
@property (nonatomic) _Bool supportsTimeRangeFilterOnInbox;
@property (nonatomic) _Bool supportsAutoSchedule;
@property (nonatomic) _Bool supportsPrivateComments;
@property (nonatomic) _Bool supportsLikenessPropagation;
@property (nonatomic) _Bool supportsSharing;
@property (nonatomic) _Bool supportsSharingNoScheduling;
@property (nonatomic) _Bool supportsCalendarProxy;
@property (nonatomic) _Bool supportsInboxAvailability;
@property (nonatomic) _Bool supportsPrivateEvents;
@property (nonatomic) _Bool supportsSubscriptionCalendars;
@property (nonatomic) _Bool supportsPrincipalPropertySearch;
@property (nonatomic) _Bool supportsExtendedCalendarQuery;
@property (nonatomic) _Bool supportsRequestCompression;
@property (nonatomic) _Bool supportsManagedAttachments;
@property (nonatomic) _Bool supportsCheckForValidEmail;
@property (nonatomic) _Bool supportsChecksumming;
@property (nonatomic) _Bool supportsCalendarHomeSync;
@property (nonatomic) _Bool supportsCalendarNoTimezone;
@property (nonatomic) _Bool supportsCalendarRecurrenceSplit;
@property (nonatomic) _Bool supportsCalendarAudit;
@property (nonatomic) _Bool supportsTelephone;
@property (nonatomic) _Bool alwaysSupportsFreebusyOnOutbox;
@property (copy, nonatomic) NSString *supportedCalendarComponentSets;
@property (retain, nonatomic) NSSet *complianceClasses;
@property (copy, nonatomic) NSString *serverHeader;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) _Bool requiresOpeningAttachmentAsLink;
@property (nonatomic, readonly) _Bool shouldUseDeleteAndAddInsteadOfMoveBetweenCalendars;

+ (id)versionWithPropertyValue:(id)arg1;
+ (id)versionWithHTTPHeaders:(id)arg1;
+ (id)_prototypeMatchingServerHeaders:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)propertyValue;
- (id)_propertiesToComplianceClasses;
- (id)_additionalFlagKeys;
- (void)_setPropertiesFromComplianceClasses:(id)arg1;
- (id)_allFlagKeys;

@end
