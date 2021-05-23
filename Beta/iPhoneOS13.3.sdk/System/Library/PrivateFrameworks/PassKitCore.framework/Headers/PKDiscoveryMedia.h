/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSDictionary, NSString, PKColor;

@interface PKDiscoveryMedia : NSObject <Swift>

{
    long long _type;
    NSDictionary *_urls;
    double _width;
    double _height;
    PKColor *_backgroundColor;
    NSString *_passKitUIImageName;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSDictionary *urls;
@property (nonatomic, readonly) double width;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) PKColor *backgroundColor;
@property (nonatomic, readonly) NSString *passKitUIImageName;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)_remoteAssetForScale:(double)arg1;
- (id)imageDataFromCacheWithScale:(double)arg1;
- (void)downloadImageDataWithScale:(double)arg1 shouldWriteData:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;

@end
