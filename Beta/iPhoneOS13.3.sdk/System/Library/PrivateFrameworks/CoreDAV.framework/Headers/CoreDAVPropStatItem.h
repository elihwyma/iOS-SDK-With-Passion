/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVErrorItem, CoreDAVLeafItem;

@interface CoreDAVPropStatItem : CoreDAVItem

{
    CoreDAVLeafItem *_status;
    CoreDAVItem *_prop;
    CoreDAVErrorItem *_errorItem;
    CoreDAVLeafItem *_responseDescription;
}

@property (retain, nonatomic) CoreDAVLeafItem *status;
@property (retain, nonatomic) CoreDAVItem *prop;
@property (retain, nonatomic) CoreDAVErrorItem *errorItem;
@property (retain, nonatomic) CoreDAVLeafItem *responseDescription;

+ (id)copyParseRules;

- (id)init;
- (id)description;

@end
