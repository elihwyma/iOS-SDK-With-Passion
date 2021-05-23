/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSString;

@interface AKDeviceListDeltaMessagePayload : NSObject

{
    NSString *_altDSID;
    unsigned long long _operation;
    NSString *_machineID;
    NSArray *_machineIDs;
    NSString *_serialNumber;
    NSDate *_timestamp;
}

@property (copy, readonly) NSString *altDSID;
@property (readonly) unsigned long long operation;
@property (copy, readonly) NSString *machineID;
@property (copy, readonly) NSArray *machineIDs;
@property (copy, readonly) NSString *serialNumber;
@property (copy, readonly) NSDate *timestamp;

- (unsigned long long)_convertOperationToEnum:(id)arg1;
- (id)initWithResponseBody:(id)arg1;

@end
