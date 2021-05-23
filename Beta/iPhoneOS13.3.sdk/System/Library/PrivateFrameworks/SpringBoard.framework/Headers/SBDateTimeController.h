/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSDate, NSHashTable;

@interface SBDateTimeController : NSObject

{
    NSDate *_overrideDate;
    NSHashTable *_observers;
}

@property (copy, nonatomic, readonly) NSDate *currentDate;
@property (copy, nonatomic) NSDate *overrideDate;

+ (id)sharedInstance;

- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;

@end
