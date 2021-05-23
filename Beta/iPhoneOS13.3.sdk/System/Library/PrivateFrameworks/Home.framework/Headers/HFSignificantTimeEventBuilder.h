/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFEventBuilder.h>

@class NSDateComponents, NSString;

@interface HFSignificantTimeEventBuilder : HFEventBuilder

{
    NSString *_significantEvent;
    NSDateComponents *_significantEventOffset;
}

@property (copy, nonatomic) NSString *significantEvent;
@property (copy, nonatomic) NSDateComponents *significantEventOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithEvent:(id)arg1;
- (id)performValidation;
- (id)naturalLanguageNameOfType:(unsigned long long)arg1 withHome:(id)arg2 recurrences:(id)arg3;
- (id)buildNewEventFromCurrentState;

@end
