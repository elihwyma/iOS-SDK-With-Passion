/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@class NSDate, NSNumber;

@interface IMMessageNotificationTimer : NSObject

{
    NSDate *_date;
    NSNumber *_numberDingsLeft;
}

@property (retain, nonatomic) NSDate *date;
@property (nonatomic, readonly) NSNumber *numberDingsLeft;
@property (nonatomic, readonly) _Bool areDingsRemaining;

- (void)dealloc;
- (id)initWithDate:(id)arg1;
- (void)reduceNumberDingsLeft;

@end
