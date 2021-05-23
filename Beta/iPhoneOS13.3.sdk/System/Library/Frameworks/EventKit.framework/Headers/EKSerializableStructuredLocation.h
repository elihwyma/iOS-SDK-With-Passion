/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKSerializableObject.h>

@class CalLocation;

__attribute__((visibility("hidden")))
@interface EKSerializableStructuredLocation : EKSerializableObject

{
    CalLocation *_calLocation;
}

@property (copy, nonatomic) CalLocation *calLocation;

+ (id)classesForKey;

- (id)initWithStructuredLocation:(id)arg1;
- (id)createStructuredLocation;

@end
