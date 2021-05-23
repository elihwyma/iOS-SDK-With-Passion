/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CalDAV/Swift-Protocol.h>

@class NSString, NSURL;

@protocol CalDAVSubscribedCalendar <Swift>

@property (retain, nonatomic) NSURL *subscriptionURL;
@property (nonatomic) _Bool hasAlarmFilter;
@property (nonatomic) _Bool hasAttachmentFilter;
@property (nonatomic) _Bool hasTaskFilter;
@property (nonatomic) double refreshInterval;
@property (nonatomic) _Bool autoprovisioned;
@property (retain, nonatomic) NSString *locationCode;
@property (retain, nonatomic) NSString *languageCode;

@end
