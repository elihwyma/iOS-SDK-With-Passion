/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

#import <WorkflowKit/Swift-Protocol.h>

@class NSNumber, NSString;

@interface WFEKCalendarDescriptor : NSObject <Swift>

{
    _Bool _allCalendars;
    NSString *_calendarTitle;
    NSString *_calendarIdentifier;
    NSNumber *_calendarRGBAValue;
}

@property (nonatomic, readonly) _Bool allCalendars;
@property (copy, nonatomic, readonly) NSString *calendarTitle;
@property (copy, nonatomic, readonly) NSString *calendarIdentifier;
@property (nonatomic, readonly) NSNumber *calendarRGBAValue;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAllCalendars;
- (id)initWithCalendarTitle:(id)arg1 identifier:(id)arg2 RGBAValue:(id)arg3;
- (id)matchingCalendarsFromArray:(id)arg1;

@end
