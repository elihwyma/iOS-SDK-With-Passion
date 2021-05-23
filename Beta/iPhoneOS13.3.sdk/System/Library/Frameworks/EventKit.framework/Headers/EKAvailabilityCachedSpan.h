/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSObject.h>

@class EKAvailabilitySpan, NSDate;

__attribute__((visibility("hidden")))
@interface EKAvailabilityCachedSpan : NSObject

{
    NSDate *_creationDate;
    EKAvailabilitySpan *_span;
}

@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) EKAvailabilitySpan *span;

- (id)description;
- (id)initWithSpan:(id)arg1;

@end
