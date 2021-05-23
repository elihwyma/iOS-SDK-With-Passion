/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableArray;

@interface KTDevice : NSObject

{
    NSData *_deviceID;
    NSData *_deviceIDVRFOutput;
    NSMutableArray *_clientDatas;
}

@property (retain) NSData *deviceID;
@property (retain) NSData *deviceIDVRFOutput;
@property (retain) NSMutableArray *clientDatas;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMutation:(id)arg1;
- (_Bool)updateWithMutation:(id)arg1 error:(id *)arg2;
- (id)clientRecordForAppVersion:(unsigned long long)arg1 clientDataVRFOutput:(id)arg2;
- (void)markClientDatasForAppVersion:(unsigned long long)arg1 mutationMs:(unsigned long long)arg2;
- (void)addClientDatasObject:(id)arg1;
- (void)removeClientDatasObject:(id)arg1;
- (id)clientRecordsForVRFOutput:(id)arg1;

@end
