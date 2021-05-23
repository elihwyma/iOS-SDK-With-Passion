/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

#import <NSObject.h>

@class NSString;

@interface PPCalendar : NSObject

{
    NSString *_calendarIdentifier;
    NSString *_title;
    struct CGColor *_color;
}

@property (nonatomic, readonly) NSString *calendarIdentifier;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) struct CGColor *color;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCalendarIdentifier:(id)arg1 title:(id)arg2 color:(struct CGColor *)arg3;
- (id)initWithEKCalendar:(id)arg1;
- (_Bool)isEqualToCalendar:(id)arg1;

@end
