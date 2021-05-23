/*
 Image: /System/Library/PrivateFrameworks/DASDaemon.framework/DASDaemon
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface _DASLogEntry : NSObject

{
    NSDate *_date;
    NSString *_category;
    NSString *_message;
}

@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSString *category;
@property (retain, nonatomic) NSString *message;

+ (id)logEntryForDate:(id)arg1 category:(id)arg2 message:(id)arg3;

- (id)description;

@end
