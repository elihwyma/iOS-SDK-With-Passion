/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@interface CLSensorRecorderSensorMeta : NSObject

{
    _Bool _movement;
    unsigned int _offset;
    unsigned int _dataSize;
    int _dataType;
    unsigned long long _identifier;
    double _startTime;
    unsigned long long _timestamp;
    unsigned long long _dataIdentifier;
}

@property unsigned long long identifier;
@property double startTime;
@property unsigned long long timestamp;
@property unsigned long long dataIdentifier;
@property unsigned int offset;
@property unsigned int dataSize;
@property int dataType;
@property _Bool movement;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataType:(int)arg1;

@end
