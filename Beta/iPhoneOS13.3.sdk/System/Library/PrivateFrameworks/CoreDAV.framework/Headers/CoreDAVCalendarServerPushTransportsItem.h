/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CoreDAVCalendarServerPushTransportsItem : CoreDAVItem

{
    NSMutableSet *_transports;
}

@property (retain, nonatomic) NSMutableSet *transports;

+ (id)copyParseRules;

- (id)init;
- (id)description;
- (void)addTransport:(id)arg1;

@end
