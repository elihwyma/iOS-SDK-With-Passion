/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

@class NSString, PHAssetCollection;

@interface PXDisplayTitleInfo : PXObservable

{
    _Bool _useVerboseSmartDescription;
    NSString *_title;
    NSString *_subtitle;
    NSString *_fontName;
    PHAssetCollection *__assetCollection;
}

@property (retain, nonatomic, setter=_setAssetCollection:) PHAssetCollection *_assetCollection;
@property (nonatomic) _Bool useVerboseSmartDescription;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *subtitle;
@property (copy, nonatomic, readonly) NSString *fontName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)displayTitleInfoForDetailsOfAssetCollection:(id)arg1 withTitleCategory:(long long)arg2 defaultTitle:(id)arg3 defaultTitleCategory:(long long)arg4 titleKey:(id)arg5 titleCategoryKey:(id)arg6 defaultSubtitle:(id)arg7 subtitleKey:(id)arg8 simulatedLoadingDelay:(double)arg9 preferredAttributesPromise:(CDUnknownBlockType)arg10;

- (id)init;
- (void)setTitle:(id)arg1;
- (void)setFontName:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (id)mutableChangeObject;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 fontName:(id)arg3;
- (id)initWithAssetCollection:(id)arg1 useVerboseSmartDescription:(_Bool)arg2;
- (void)_updatePropertiesFromAssetCollection;

@end
