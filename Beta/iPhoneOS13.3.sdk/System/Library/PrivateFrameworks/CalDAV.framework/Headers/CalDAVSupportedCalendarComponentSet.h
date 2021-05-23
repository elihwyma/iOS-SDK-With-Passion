/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet, NSSet;

@interface CalDAVSupportedCalendarComponentSet : CoreDAVItem

{
    NSMutableSet *_comps;
}

@property (retain, nonatomic) NSMutableSet *comps;
@property (nonatomic, readonly) NSSet *compNames;

- (id)init;
- (id)description;
- (id)componentsAsString;
- (void)addComp:(id)arg1;
- (id)copyParseRules;
- (id)childrenToWrite;

@end
