/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@interface CLSensorRecorderSensorSampleRate : NSObject

{
    unsigned int _rate;
    int _dataType;
}

@property unsigned int rate;
@property int dataType;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
