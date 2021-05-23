/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface EKExceptionDate : EKObject

@property (retain, nonatomic) NSDate *date;

+ (Class)frozenClass;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDate:(id)arg1;

@end
