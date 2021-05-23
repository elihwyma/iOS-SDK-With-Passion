/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@interface CLSensorRecorderSensorDataRequestById : NSObject

{
    int _dataType;
    unsigned long long _identifier;
    unsigned long long _metaIdentifier;
}

@property unsigned long long identifier;
@property unsigned long long metaIdentifier;
@property int dataType;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
