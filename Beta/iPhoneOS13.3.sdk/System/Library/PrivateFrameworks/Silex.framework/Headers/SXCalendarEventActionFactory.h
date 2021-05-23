/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXDateParser;

@interface SXCalendarEventActionFactory : NSObject

{
    id <SXDateParser> _dateParser;
}

@property (nonatomic, readonly) id <SXDateParser> dateParser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)actionForAddition:(id)arg1;
- (id)actionForURL:(id)arg1;
- (id)actionForStartDate:(id)arg1 endDate:(id)arg2;
- (id)initWithDateParser:(id)arg1;

@end
