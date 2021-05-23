/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@class NSData;

@interface SBSApplicationShortcutCustomImageIcon

{
    _Bool _isTemplate;
    NSData *_imageData;
    long long _dataType;
}

@property (nonatomic, readonly) NSData *imageData;
@property (nonatomic, readonly) long long dataType;
@property (nonatomic, readonly) _Bool isTemplate;
@property (nonatomic, readonly) NSData *imagePNGData;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)initWithImageData:(id)arg1 dataType:(long long)arg2 isTemplate:(_Bool)arg3;
- (id)_initForSubclass;
- (id)initWithImageData:(id)arg1 dataType:(long long)arg2;
- (id)initWithImagePNGData:(id)arg1;

@end
