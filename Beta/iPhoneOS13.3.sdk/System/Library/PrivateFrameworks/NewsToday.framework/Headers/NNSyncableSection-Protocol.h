/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <NewsToday/Swift-Protocol.h>

@class NSArray, NSString;

@protocol NNSyncableSection <Swift>

@property (nonatomic, readonly) NSString *sync_identifier;
@property (nonatomic, readonly) NSString *sync_name;
@property (nonatomic, readonly) unsigned long long sync_type;
@property (nonatomic, readonly) NSString *sync_colorHexString;
@property (nonatomic, readonly) NSArray *sync_headlines;

@end
