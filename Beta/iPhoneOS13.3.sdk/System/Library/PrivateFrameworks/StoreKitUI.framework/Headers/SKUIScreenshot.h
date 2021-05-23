/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSMutableDictionary, NSString;

@interface SKUIScreenshot : NSObject <Swift>

{
    NSString *_orientation;
    long long _uniqueIdentifier;
    NSMutableDictionary *_urls;
    NSMutableDictionary *_sizes;
    NSString *_urlTemplate;
}

@property (nonatomic, readonly) long long numberOfVariants;
@property (nonatomic, readonly) NSString *orientationString;
@property (nonatomic, readonly) long long uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSMutableDictionary *cacheRepresentation;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCacheRepresentation:(id)arg1;
- (void)setArtwork:(id)arg1 forVariant:(id)arg2;
- (id)_initSKUIScreenshot;
- (void)_addURLsFromDictionary:(id)arg1 withRemoteLocalKeysMap:(id)arg2;
- (id)_firstVariant;
- (id)initWithScreenshotDictionary:(id)arg1;
- (struct CGSize)sizeForVariant:(id)arg1;
- (id)URLForVariant:(id)arg1;

@end
