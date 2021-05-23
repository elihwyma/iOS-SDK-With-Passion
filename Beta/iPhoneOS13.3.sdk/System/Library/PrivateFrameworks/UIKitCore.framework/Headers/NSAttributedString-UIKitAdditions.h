/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSAttributedString.h>

@class NSArray, NSString;

@interface NSAttributedString (UIKitAdditions)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSArray *writableTypeIdentifiersForItemProvider;

+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
+ (id)writableTypeIdentifiersForItemProvider;
+ (long long)_preferredRepresentationForItemProviderWritableTypeIdentifier:(id)arg1;
+ (id)readableTypeIdentifiersForItemProvider;
+ (long long)_preferredRepresentationForItemProviderReadableTypeIdentifier:(id)arg1;
+ (id)_objectWithItemProviderFileURL:(id)arg1 typeIdentifier:(id)arg2 isInPlace:(_Bool)arg3 error:(id *)arg4;
+ (id)_objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 userInfo:(id)arg3 error:(id *)arg4;
+ (id)_objectWithRTFDAtURL:(id)arg1 userInfo:(id)arg2 error:(id *)arg3;

- (long long)_preferredRepresentationForItemProviderWritableTypeIdentifier:(id)arg1;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;
- (id)_loadFileRepresentationOfTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;
- (long long)_ui_resolvedTextAlignmentForUserInterfaceLayoutDirection:(long long)arg1;
- (long long)_ui_resolvedTextAlignment;
- (long long)_ui_resolvedWritingDirection;
- (long long)_ui_resolvedWritingDirectionForUserInterfaceLayoutDirection:(long long)arg1;
- (id)_ui_attributedStringWithOriginalFontAttributes;
- (id)_ui_glyphImageViewsScale:(double)arg1 outImageRect:(struct CGRect *)arg2 outLineRect:(struct CGRect *)arg3 outBaselineOffset:(double *)arg4;
- (id)_ui_rtfdFileWrapperError:(id *)arg1;
- (id)_ui_rtfDataError:(id *)arg1;
- (id)_ui_synthesizeAttributedSubstringFromRange:(struct _NSRange)arg1 usingDefaultAttributes:(id)arg2;
- (id)initWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
- (id)_ui_fontsInRange:(struct _NSRange)arg1 usingDefaultFont:(id)arg2;

@end
