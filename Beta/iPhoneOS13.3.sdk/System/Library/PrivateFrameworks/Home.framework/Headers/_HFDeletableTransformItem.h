/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFTransformItem.h>

@class NSString;

@interface _HFDeletableTransformItem : HFTransformItem

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)hf_canDeleteItem;
- (id)hf_deleteItem;

@end
