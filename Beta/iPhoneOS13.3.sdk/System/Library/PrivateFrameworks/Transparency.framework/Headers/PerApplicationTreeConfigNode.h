/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@class VRFPublicKey;

@interface PerApplicationTreeConfigNode

@property (retain, nonatomic) VRFPublicKey *vrfPublicKey;
@property (nonatomic) _Bool hasVrfPublicKey;

+ (id)descriptor;

@end
