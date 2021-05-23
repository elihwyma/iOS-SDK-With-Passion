/*
 Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

#import <Foundation/NSObject.h>

@class CalLocation, NSString;

@interface CalRoute : NSObject

{
    CalLocation *_start;
    CalLocation *_end;
    double _duration;
    NSString *_route;
}

@property (retain) CalLocation *start;
@property (retain) CalLocation *end;
@property double duration;
@property (copy) NSString *route;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
