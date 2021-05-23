/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKSerializableObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface EKSerializableAlarm : EKSerializableObject

{
    _Bool _isAbsolute;
    double _relativeOffset;
    NSDate *_absoluteDate;
}

@property (nonatomic) double relativeOffset;
@property (copy, nonatomic) NSDate *absoluteDate;
@property (nonatomic) _Bool isAbsolute;

+ (id)classesForKey;

- (id)initWithAlarm:(id)arg1;
- (id)createAlarm:(id *)arg1;

@end
