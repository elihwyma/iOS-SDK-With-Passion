/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface CTRemoteDeviceList : NSObject

{
    NSMutableArray *_devices;
}

@property (retain, nonatomic) NSMutableArray *devices;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
