/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/Swift-Protocol.h>

@class NSArray;

@protocol HFHomeKitObject;

@protocol HFCompoundItemProtocol <Swift>

@property (nonatomic, readonly) _Bool isCompoundItem;
@property (nonatomic, readonly) unsigned long long numberOfCompoundItems;
@property (nonatomic, readonly) id <HFHomeKitObject> primaryHomeKitObject;
@property (nonatomic, readonly) NSArray *allHomeKitObjects;

@end
