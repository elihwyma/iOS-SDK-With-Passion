/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@class NSData;

@interface SingleDataRecord

@property (nonatomic) unsigned long long appVersion;
@property (copy, nonatomic) NSData *clientDataVrfoutput;
@property (nonatomic) unsigned long long markedForDeletionMs;
@property (nonatomic) unsigned long long deletionEscrowExpiryMs;
@property (nonatomic) unsigned long long addedMs;

+ (id)descriptor;

@end
