/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface IMPreviewGeneratorManager : NSObject

{
    NSDictionary *_UTITypes;
    NSDictionary *_dynamicTypes;
}

@property (copy, nonatomic) NSDictionary *UTITypes;
@property (copy, nonatomic) NSDictionary *dynamicTypes;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (struct CGImage *)newPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints)arg2 error:(id *)arg3;
- (Class)_previewGeneratorClassForSourceURL:(id)arg1;
- (_Bool)generateAndPersistMapPreviewFromSourceURL:(id)arg1 previewURL:(id)arg2 size:(out struct CGSize *)arg3 previewConstraints:(struct IMPreviewConstraints)arg4 error:(id *)arg5;
- (_Bool)persistPreviewToDiskCache:(struct CGImage *)arg1 previewURL:(id)arg2 error:(id *)arg3;
- (_Bool)movePreviewToDiskCache:(id)arg1 previewURL:(id)arg2 error:(id *)arg3;
- (Class)previewGeneratorClassForUTIType:(id)arg1;
- (_Bool)_utiTypeIsHEICish:(id)arg1;
- (_Bool)generateAndPersistPreviewFromSourceURL:(id)arg1 previewURL:(id)arg2 size:(out struct CGSize *)arg3 previewConstraints:(struct IMPreviewConstraints)arg4 error:(id *)arg5;
- (_Bool)sizePreviewFromSourceURL:(id)arg1 size:(out struct CGSize *)arg2 previewConstraints:(struct IMPreviewConstraints)arg3 error:(id *)arg4;

@end
