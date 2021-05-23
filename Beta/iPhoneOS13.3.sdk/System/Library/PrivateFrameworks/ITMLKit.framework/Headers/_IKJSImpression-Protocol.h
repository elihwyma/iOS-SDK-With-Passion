/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/Swift-Protocol.h>

@class NSArray, NSString;

@protocol _IKJSImpression <Swift>

@property (nonatomic, readonly) NSString *data;
@property (nonatomic, readonly) NSArray *timestamps;
@property (nonatomic, readonly) NSArray *children;
@property (nonatomic, readonly) id parent;
@property (nonatomic, readonly) long long index;
@property (nonatomic, readonly) NSString *impressionQueueTag;

@end
