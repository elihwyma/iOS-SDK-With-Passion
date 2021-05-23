/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSSet, SKUIStoreIdentifier;

__attribute__((visibility("hidden")))
@interface SKUIStoreItemRelationship : NSObject

{
    SKUIStoreIdentifier *_singleParent;
    NSSet *_chidItems;
}

@property (copy, nonatomic, readonly) SKUIStoreIdentifier *singleParent;
@property (copy, nonatomic, readonly) NSSet *chidItems;

- (id)initWithParent:(id)arg1 andChildren:(id)arg2;

@end
