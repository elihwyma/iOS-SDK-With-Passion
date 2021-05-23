/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSArray, NSNumber, NSString, SKUIStoreIdentifier;

@interface SKUIItemState : NSObject <Swift>

{
    float _downloadProgress;
    unsigned long long _downloadContentFlags;
    NSString *_downloadPhase;
    NSNumber *_itemIdentifier;
    NSArray *_downloadIdentifiers;
    SKUIStoreIdentifier *_storeIdentifier;
    unsigned long long _libraryContentFlags;
    long long _mediaCategory;
    unsigned long long _state;
    NSString *_variantIdentifier;
}

@property (nonatomic, readonly) _Bool activeStateIsPreview;
@property (nonatomic, readonly) unsigned long long allContentFlags;
@property (nonatomic) unsigned long long downloadContentFlags;
@property (copy, nonatomic) NSString *downloadPhase;
@property (nonatomic) float downloadProgress;
@property (copy, nonatomic) NSNumber *itemIdentifier;
@property (copy, nonatomic) NSArray *downloadIdentifiers;
@property (copy, nonatomic) SKUIStoreIdentifier *storeIdentifier;
@property (nonatomic) unsigned long long libraryContentFlags;
@property (nonatomic) long long mediaCategory;
@property (nonatomic) unsigned long long state;
@property (copy, nonatomic) NSString *variantIdentifier;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
