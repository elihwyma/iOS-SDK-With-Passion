/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFDailyStatusEvent : WFEvent

{
    _Bool _installed;
    _Bool _sharingEnabled;
    _Bool _personalAutomationsEnabled;
    _Bool _homeAutomationsEnabled;
    NSString *_key;
}

@property (copy, nonatomic) NSString *key;
@property (nonatomic) _Bool installed;
@property (nonatomic) _Bool sharingEnabled;
@property (nonatomic) _Bool personalAutomationsEnabled;
@property (nonatomic) _Bool homeAutomationsEnabled;

+ (Class)codableEventClass;

@end
