/*
 Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

#import <Foundation/NSObject.h>

@interface STMapViewportVertex : NSObject

{
    double _latitude;
    double _longitude;
}

@property (nonatomic) double latitude;
@property (nonatomic) double longitude;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
