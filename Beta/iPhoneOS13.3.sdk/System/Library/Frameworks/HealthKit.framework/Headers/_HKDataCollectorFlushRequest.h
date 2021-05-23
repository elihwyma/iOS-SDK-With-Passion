/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface _HKDataCollectorFlushRequest : NSObject

{
    NSDate *_date;
    CDUnknownBlockType _completion;
}

@property (copy, nonatomic, readonly) NSDate *date;
@property (copy, nonatomic, readonly) CDUnknownBlockType completion;

- (id)initWithDate:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
