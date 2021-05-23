/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@class NSData;

@interface ChangeRecord

@property (nonatomic) unsigned long long mutationMs;
@property (nonatomic) int mutationType;
@property (copy, nonatomic) NSData *uriVrfoutput;
@property (copy, nonatomic) NSData *accountId;
@property (copy, nonatomic) NSData *deviceIdVrfoutput;
@property (copy, nonatomic) NSData *clientDataVrfoutput;
@property (nonatomic) unsigned long long appVersion;

+ (id)descriptor;

@end
