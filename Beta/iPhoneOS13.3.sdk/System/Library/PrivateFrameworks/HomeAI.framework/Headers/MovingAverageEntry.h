/*
 Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

#import <HMFoundation/HMFObject.h>

@class NSDate, NSNumber;

__attribute__((visibility("hidden")))
@interface MovingAverageEntry : HMFObject

{
    NSNumber *_value;
    NSDate *_date;
}

@property (readonly) NSNumber *value;
@property (readonly) NSDate *date;

- (id)initWithValue:(id)arg1;

@end
