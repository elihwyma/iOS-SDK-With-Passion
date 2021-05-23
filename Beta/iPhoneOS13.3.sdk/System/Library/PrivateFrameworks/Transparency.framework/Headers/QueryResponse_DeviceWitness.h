/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@class NSMutableArray, VRFWitness;

@interface QueryResponse_DeviceWitness

@property (retain, nonatomic) VRFWitness *deviceIdWitness;
@property (nonatomic) _Bool hasDeviceIdWitness;
@property (retain, nonatomic) NSMutableArray *clientDataWitnessArray;
@property (nonatomic, readonly) unsigned long long clientDataWitnessArray_Count;

+ (id)descriptor;

@end
