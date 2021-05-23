/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@class NSData, TransparencyVRFVerifier;

@interface VRFWitness

@property (retain) TransparencyVRFVerifier *verifier;
@property (retain) NSData *message;
@property (retain) NSData *salt;
@property (nonatomic) int type;
@property (copy, nonatomic) NSData *output;
@property (copy, nonatomic) NSData *proof;

+ (id)descriptor;

- (_Bool)verifyWithError:(id *)arg1;

@end
