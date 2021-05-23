/*
 Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface MSPBTimerContext : NSObject

{
    _Bool _isValid;
    NSDate *_date;
}

@property (nonatomic) _Bool isValid;
@property (retain, nonatomic) NSDate *date;

+ (id)contextWithDate:(id)arg1;

- (id)init;

@end
