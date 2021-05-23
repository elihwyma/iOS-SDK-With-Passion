/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VUIDebugMetricsEvent : NSObject

{
    NSDictionary *_elements;
    NSDictionary *_timingElements;
    NSDictionary *_commonElements;
    NSDictionary *_reliableUnderlyingDictionary;
}

@property (retain, nonatomic) NSDictionary *reliableUnderlyingDictionary;
@property (retain, nonatomic) NSDictionary *elements;
@property (retain, nonatomic) NSDictionary *timingElements;
@property (retain, nonatomic) NSDictionary *commonElements;
@property (nonatomic, readonly) NSArray *sortedElementKeys;
@property (nonatomic, readonly) NSArray *sortedTimingKeys;
@property (nonatomic, readonly) NSArray *sortedCommonKeys;
@property (nonatomic, readonly) NSDate *eventDate;
@property (nonatomic, readonly) NSString *eventType;
@property (nonatomic, readonly) NSString *eventSubheader;
@property (nonatomic, readonly) NSString *eventTertiaryInformation;
@property (nonatomic, readonly) NSString *pageContext;
@property (nonatomic, readonly) NSDictionary *rawEvent;

- (id)objectForKeyedSubscript:(id)arg1;
- (id)initWithEventDictionary:(id)arg1 termCollater:(id)arg2;

@end
