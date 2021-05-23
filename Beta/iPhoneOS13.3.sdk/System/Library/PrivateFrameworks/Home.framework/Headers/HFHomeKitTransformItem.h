/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFTransformItem.h>

#import <Home/Swift-Protocol.h>

@class HFItem, NSString;

@protocol HFHomeKitItemProtocol, HFHomeKitObject;

@interface HFHomeKitTransformItem : HFTransformItem <Swift>

@property (nonatomic, readonly) HFItem<HFHomeKitItemProtocol> *sourceHomeKitItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <HFHomeKitObject> homeKitObject;

- (id)accessories;

@end
