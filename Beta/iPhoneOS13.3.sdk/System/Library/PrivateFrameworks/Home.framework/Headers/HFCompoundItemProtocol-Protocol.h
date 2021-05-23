/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/Swift-Protocol.h>

@class NSArray;

@protocol HFHomeKitObject;

@protocol HFCompoundItemProtocol <Swift>

@property (nonatomic, readonly) _Bool isCompoundItem;
@property (nonatomic, readonly) unsigned long long numberOfCompoundItems;
@property (nonatomic, readonly) id <HFHomeKitObject> primaryHomeKitObject;
@property (nonatomic, readonly) NSArray *allHomeKitObjects;

@end
