/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSDictionary, NSString;

@interface SSVStoreDownload : NSObject

{
    NSDictionary *_properties;
    NSString *_preferredAssetFlavor;
}

@property (nonatomic, readonly) NSDictionary *properties;
@property (copy, nonatomic) NSString *preferredAssetFlavor;

- (id)initWithDictionary:(id)arg1;

@end
