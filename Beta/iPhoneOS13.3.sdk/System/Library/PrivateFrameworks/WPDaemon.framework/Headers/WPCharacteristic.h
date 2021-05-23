/*
 Image: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
 */

#import <Foundation/NSObject.h>

@class NSData, NSUUID;

@interface WPCharacteristic : NSObject

{
    NSUUID *_uuid;
    unsigned long long _properties;
    unsigned long long _permissions;
    NSData *_data;
    long long _writeType;
}

@property (retain) NSUUID *uuid;
@property unsigned long long properties;
@property unsigned long long permissions;
@property (retain) NSData *data;
@property long long writeType;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
