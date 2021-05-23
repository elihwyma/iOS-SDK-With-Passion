/*
 Image: /System/Library/PrivateFrameworks/PowerlogHelperdOperators.framework/PowerlogHelperdOperators
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface PLDuetEventTransition : NSObject

{
    _Bool _isStart;
    NSDate *_date;
    NSString *_bundleID;
}

@property (retain) NSDate *date;
@property (retain) NSString *bundleID;
@property _Bool isStart;

- (id)description;

@end
