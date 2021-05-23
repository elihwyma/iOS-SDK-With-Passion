/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <CompanionSync/Swift-Protocol.h>

@class NSDictionary, NSProgress;

@protocol SYStreamTransaction <Swift>

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSDictionary *metadata;
@property (nonatomic, readonly) NSProgress *progress;

@end
