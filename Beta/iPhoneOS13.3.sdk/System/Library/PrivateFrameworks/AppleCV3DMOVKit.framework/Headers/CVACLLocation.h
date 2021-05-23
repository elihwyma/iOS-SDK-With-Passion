/*
 Image: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
 */

#import <Foundation/NSObject.h>

@interface CVACLLocation : NSObject

{
    double _timestamp;
    double _timestampSince1970;
    double _latitude;
    double _longitude;
    double _altitude;
    double _horizontalAccuracy;
    double _verticalAccuracy;
    double _speed;
    double _course;
}

@property double timestamp;
@property double timestampSince1970;
@property double latitude;
@property double longitude;
@property double altitude;
@property double horizontalAccuracy;
@property double verticalAccuracy;
@property double speed;
@property double course;

- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (id)initWithCLLocation:(id)arg1 timestamp:(double)arg2;

@end
