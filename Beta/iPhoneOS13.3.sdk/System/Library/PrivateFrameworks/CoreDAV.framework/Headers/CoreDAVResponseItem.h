/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVErrorItem, CoreDAVItemWithHrefChildItem, CoreDAVLeafItem, CoreDAVMatchResultsItem, NSMutableArray, NSMutableSet;

@interface CoreDAVResponseItem : CoreDAVItem

{
    NSMutableArray *_hrefs;
    CoreDAVLeafItem *_status;
    NSMutableSet *_propStats;
    CoreDAVErrorItem *_errorItem;
    CoreDAVLeafItem *_responseDescription;
    CoreDAVItemWithHrefChildItem *_location;
    CoreDAVLeafItem *_serverUID;
    CoreDAVMatchResultsItem *_matchResults;
}

@property (retain, nonatomic) NSMutableArray *hrefs;
@property (retain, nonatomic) CoreDAVLeafItem *status;
@property (retain, nonatomic) NSMutableSet *propStats;
@property (retain, nonatomic) CoreDAVErrorItem *errorItem;
@property (retain, nonatomic) CoreDAVLeafItem *responseDescription;
@property (retain, nonatomic) CoreDAVItemWithHrefChildItem *location;
@property (retain, nonatomic) CoreDAVLeafItem *serverUID;
@property (retain, nonatomic) CoreDAVMatchResultsItem *matchResults;

+ (id)copyParseRules;

- (id)init;
- (id)description;
- (id)successfulPropertiesToValues;
- (id)firstHref;
- (_Bool)hasPropertyError;
- (void)addHref:(id)arg1;
- (void)addPropStat:(id)arg1;

@end
