/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/Swift-Protocol.h>

@class NSSet;

@protocol EDSearchableIndexReasonProvider <Swift>

@property (copy, nonatomic, readonly) NSSet *dataSourceRefreshReasons;
@property (copy, nonatomic, readonly) NSSet *purgeReasons;
@property (copy, nonatomic, readonly) NSSet *exclusionReasons;
@property (copy, nonatomic, readonly) NSSet *currentReasons;

@end
