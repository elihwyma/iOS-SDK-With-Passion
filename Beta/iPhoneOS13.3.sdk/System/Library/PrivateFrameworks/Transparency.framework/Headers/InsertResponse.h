/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@class NSData, NSString, SignedMutationTimestamp, VRFWitness;

@interface InsertResponse

@property (nonatomic) int status;
@property (retain, nonatomic) SignedMutationTimestamp *smt;
@property (nonatomic) _Bool hasSmt;
@property (retain, nonatomic) VRFWitness *uriWitness;
@property (nonatomic) _Bool hasUriWitness;
@property (copy, nonatomic) NSData *accountId;
@property (retain, nonatomic) VRFWitness *deviceIdWitness;
@property (nonatomic) _Bool hasDeviceIdWitness;
@property (retain, nonatomic) VRFWitness *clientDataWitness;
@property (nonatomic) _Bool hasClientDataWitness;
@property (copy, nonatomic) NSString *serverEventInfo;

+ (id)descriptor;

@end
