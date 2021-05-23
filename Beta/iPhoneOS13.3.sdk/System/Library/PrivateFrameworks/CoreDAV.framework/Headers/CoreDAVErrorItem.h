/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren, CoreDAVLeafItem;

@interface CoreDAVErrorItem : CoreDAVItem

{
    CoreDAVItemWithNoChildren *_numberOfMatchesWithinLimits;
    CoreDAVItemWithNoChildren *_validSyncToken;
    CoreDAVItemWithNoChildren *_noUIDConflict;
    CoreDAVItemWithNoChildren *_validAddressData;
    CoreDAVItemWithNoChildren *_maxResourceSize;
    CoreDAVItemWithNoChildren *_uid;
    CoreDAVItemWithNoChildren *_ctagOkay;
    CoreDAVItemWithNoChildren *_maxImageSize;
    CoreDAVItemWithNoChildren *_invalidImageType;
    CoreDAVItemWithNoChildren *_imageError;
    CoreDAVItemWithNoChildren *_guardianRestricted;
    CoreDAVItemWithNoChildren *_maxAttendees;
    CoreDAVItemWithNoChildren *_quotaExceeded;
    CoreDAVItemWithNoChildren *_maxResources;
    CoreDAVItemWithNoChildren *_validTimezone;
    CoreDAVItemWithNoChildren *_validSplit;
    CoreDAVLeafItem *_status;
}

@property (retain, nonatomic) CoreDAVItemWithNoChildren *numberOfMatchesWithinLimits;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *validSyncToken;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *noUIDConflict;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *validAddressData;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *maxResourceSize;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *uid;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *ctagOkay;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *maxImageSize;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *invalidImageType;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *imageError;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *maxAttendees;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *quotaExceeded;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *maxResources;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *validTimezone;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *validSplit;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *guardianRestricted;
@property (retain, nonatomic) CoreDAVLeafItem *status;

+ (id)copyParseRules;

- (id)init;
- (id)description;

@end
