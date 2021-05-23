/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableArray;

@interface KTAccount : NSObject

{
    NSData *_accountID;
    NSMutableArray *_devices;
}

@property (retain) NSData *accountID;
@property (retain) NSMutableArray *devices;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMutation:(id)arg1;
- (id)deviceForDeviceIdVRFOutput:(id)arg1;
- (void)addDevicesObject:(id)arg1;
- (_Bool)updateWithMutation:(id)arg1 error:(id *)arg2;
- (void)removeDevicesObject:(id)arg1;
- (id)initWithAccountId:(id)arg1;

@end
