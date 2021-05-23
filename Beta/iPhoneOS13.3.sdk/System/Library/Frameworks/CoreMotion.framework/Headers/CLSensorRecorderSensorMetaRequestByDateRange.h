/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@interface CLSensorRecorderSensorMetaRequestByDateRange : NSObject

{
    int _dataType;
    double _startTime;
    double _endTime;
}

@property double startTime;
@property double endTime;
@property int dataType;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
