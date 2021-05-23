/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithHrefChildItem, CoreDAVLeafItem;

@interface CoreDAVCalendarServerTransportItem : CoreDAVItem

{
    CoreDAVLeafItem *_apsBundleID;
    CoreDAVLeafItem *_courierServer;
    CoreDAVItemWithHrefChildItem *_subscriptionURL;
    CoreDAVItemWithHrefChildItem *_tokenURL;
    CoreDAVLeafItem *_apsEnv;
    CoreDAVLeafItem *_refreshInterval;
    CoreDAVLeafItem *_xmppServer;
    CoreDAVLeafItem *_xmppURI;
}

@property (retain, nonatomic) CoreDAVLeafItem *apsBundleID;
@property (retain, nonatomic) CoreDAVLeafItem *courierServer;
@property (retain, nonatomic) CoreDAVItemWithHrefChildItem *subscriptionURL;
@property (retain, nonatomic) CoreDAVItemWithHrefChildItem *tokenURL;
@property (retain, nonatomic) CoreDAVLeafItem *apsEnv;
@property (retain, nonatomic) CoreDAVLeafItem *refreshInterval;
@property (retain, nonatomic) CoreDAVLeafItem *xmppServer;
@property (retain, nonatomic) CoreDAVLeafItem *xmppURI;

+ (id)copyParseRules;

- (id)init;
- (id)description;

@end
