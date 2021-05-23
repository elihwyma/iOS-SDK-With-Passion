/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@class NSData;

@interface Signature

@property (copy, nonatomic) NSData *signature;
@property (copy, nonatomic) NSData *signingKeySpkihash;
@property (nonatomic) int algorithm;

+ (id)descriptor;

@end
