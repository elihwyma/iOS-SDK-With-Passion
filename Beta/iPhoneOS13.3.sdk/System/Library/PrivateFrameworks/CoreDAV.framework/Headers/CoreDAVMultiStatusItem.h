/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem, NSMutableArray, NSSet;

@interface CoreDAVMultiStatusItem : CoreDAVItem

{
    NSMutableArray *_orderedResponses;
    CoreDAVLeafItem *_responseDescription;
}

@property (nonatomic, readonly) NSSet *responses;
@property (retain, nonatomic) NSMutableArray *orderedResponses;
@property (retain, nonatomic) CoreDAVLeafItem *responseDescription;

+ (id)copyParseRules;

- (id)init;
- (id)description;
- (void)addResponse:(id)arg1;

@end
