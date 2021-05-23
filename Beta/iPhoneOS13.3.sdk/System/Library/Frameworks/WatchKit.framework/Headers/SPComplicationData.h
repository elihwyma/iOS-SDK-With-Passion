/*
 Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface SPComplicationData : NSObject

{
    NSDate *_timestamp;
    double _timeToLive;
}

@property (retain, nonatomic) NSDate *timestamp;
@property (nonatomic) double timeToLive;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
