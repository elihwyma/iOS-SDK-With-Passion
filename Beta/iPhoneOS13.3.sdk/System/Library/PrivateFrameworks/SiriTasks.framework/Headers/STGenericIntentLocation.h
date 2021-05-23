/*
 Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface STGenericIntentLocation : NSObject

{
    _Bool _isLatLong;
    NSString *_name;
    double _latitude;
    double _longitude;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) _Bool isLatLong;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 latitude:(double)arg2 longitude:(double)arg3;

@end
