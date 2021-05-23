/*
 Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CalSpotlightQueryResult : NSObject

{
    _Bool _naturalLanguageSuggestedEvent;
    NSString *_identifier;
    NSString *_title;
}

@property (retain) NSString *identifier;
@property (retain) NSString *title;
@property (nonatomic, getter=isNaturalLanguageSuggestedEvent) _Bool naturalLanguageSuggestedEvent;

@end
