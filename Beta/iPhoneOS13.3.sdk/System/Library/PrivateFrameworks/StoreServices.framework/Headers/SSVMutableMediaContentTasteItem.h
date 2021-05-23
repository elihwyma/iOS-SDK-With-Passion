/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSVMediaContentTasteItem.h>

@class NSString;

@interface SSVMutableMediaContentTasteItem : SSVMediaContentTasteItem

@property (nonatomic) unsigned long long contentType;
@property (copy, nonatomic) NSString *playlistGlobalID;
@property (nonatomic) long long storeAdamID;
@property (nonatomic) unsigned long long tasteType;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
