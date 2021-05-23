/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CADisplayPersistedLatency : NSObject

{
    NSString *_uuid;
    NSDictionary *_mode;
    double _latency;
}

@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSDictionary *mode;
@property (nonatomic) double latency;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
