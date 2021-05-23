/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSMutableDictionary, NSString, NSURL;

@interface SSItemArtworkImage : NSObject

{
    NSMutableDictionary *_dictionary;
    NSString *_imageKind;
}

@property (nonatomic, readonly) struct CGSize imageSize;
@property (copy, nonatomic) NSString *imageKind;
@property (retain, nonatomic) NSURL *URL;
@property (nonatomic, readonly) NSString *URLString;
@property (nonatomic, readonly) long long height;
@property (nonatomic, readonly) long long width;
@property (nonatomic, readonly) long long imageOrientation;
@property (nonatomic, readonly) double imageScale;
@property (nonatomic, readonly, getter=isPrerendered) _Bool prerendered;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForProperty:(id)arg1;
- (void)setValue:(id)arg1 forProperty:(id)arg2;
- (id)initWithArtworkDictionary:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)setImageKindWithTypeName:(id)arg1 variantName:(id)arg2;

@end
