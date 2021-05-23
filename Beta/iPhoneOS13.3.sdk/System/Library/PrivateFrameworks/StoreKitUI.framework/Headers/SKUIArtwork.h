/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSMutableDictionary, NSString, NSURL;

@interface SKUIArtwork : NSObject <Swift>

{
    long long _height;
    NSURL *_url;
    NSString *_urlString;
    long long _width;
}

@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) long long height;
@property (nonatomic, readonly) long long width;
@property (nonatomic, readonly) NSURL *URL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSMutableDictionary *cacheRepresentation;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_lookupDictionary;
- (id)initWithArtworkDictionary:(id)arg1;
- (id)initWithCacheRepresentation:(id)arg1;
- (id)initWithURL:(id)arg1 size:(struct CGSize)arg2;

@end
