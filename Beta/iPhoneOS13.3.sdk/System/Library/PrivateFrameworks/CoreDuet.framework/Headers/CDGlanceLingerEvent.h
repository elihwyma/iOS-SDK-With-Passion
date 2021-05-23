/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface CDGlanceLingerEvent : NSObject

{
    NSString *_bundle;
    NSDate *_startDate;
    NSDate *_endDate;
}

@property (retain) NSString *bundle;
@property (retain) NSDate *startDate;
@property (retain) NSDate *endDate;

- (id)description;

@end
