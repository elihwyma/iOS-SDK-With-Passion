/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFEventBuilder.h>

@class NSDate, NSDateComponents, NSString;

@interface HFCalendarEventBuilder : HFEventBuilder

{
    NSDate *_fireDate;
    NSDateComponents *_fireTimeComponents;
}

@property (copy, nonatomic) NSDate *fireDate;
@property (copy, nonatomic) NSDateComponents *fireTimeComponents;
@property (nonatomic, readonly) NSDate *effectiveFireDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithEvent:(id)arg1;
- (id)performValidation;
- (void)updateBaseFireDateForTrigger;
- (id)naturalLanguageNameOfType:(unsigned long long)arg1 withHome:(id)arg2 recurrences:(id)arg3;
- (id)buildNewEventFromCurrentState;
- (id)effectiveFireTimeComponents;
- (id)_fireDateForTimeComponents:(id)arg1;

@end
