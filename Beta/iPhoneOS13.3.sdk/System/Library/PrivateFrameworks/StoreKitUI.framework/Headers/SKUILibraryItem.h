/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSNumber, NSString, SKUIStoreIdentifier;

@interface SKUILibraryItem : NSObject <Swift>

{
    SKUIStoreIdentifier *_storeIdentifier;
    NSString *_storeFlavorIdentifier;
}

@property (copy, nonatomic) SKUIStoreIdentifier *storeIdentifier;
@property (nonatomic, readonly) NSNumber *storeItemIdentifier;
@property (copy, nonatomic) NSString *storeFlavorIdentifier;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
