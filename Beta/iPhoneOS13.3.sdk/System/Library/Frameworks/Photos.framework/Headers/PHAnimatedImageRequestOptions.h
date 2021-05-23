/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAnimatedImageRequestOptions

{
    _Bool _allowPreCaching;
    _Bool _useSharedImageDecoding;
}

@property (nonatomic) _Bool allowPreCaching;
@property (nonatomic) _Bool useSharedImageDecoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
