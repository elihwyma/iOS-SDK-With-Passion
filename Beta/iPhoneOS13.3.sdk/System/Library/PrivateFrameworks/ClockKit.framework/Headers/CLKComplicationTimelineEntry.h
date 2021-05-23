/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <Foundation/NSObject.h>

@class CLKComplicationTemplate, NSDate, NSString;

@interface CLKComplicationTimelineEntry : NSObject

{
    _Bool _finalized;
    NSDate *_date;
    CLKComplicationTemplate *_complicationTemplate;
    NSString *_timelineAnimationGroup;
}

@property (retain, nonatomic) NSDate *date;
@property (copy, nonatomic) CLKComplicationTemplate *complicationTemplate;
@property (copy, nonatomic) NSString *timelineAnimationGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)entryWithDate:(id)arg1 complicationTemplate:(id)arg2 timelineAnimationGroup:(id)arg3;
+ (id)entryWithDate:(id)arg1 complicationTemplate:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)validate;
- (id)finalizedCopy;
- (void)validateComplicationFamily:(long long)arg1;

@end
