/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@class NSDictionary, NSString, NUColorSpace, NUImageExportFormat;

@interface NUImageExportRequest

{
    _Bool _renderToData;
    NUColorSpace *_colorSpace;
    NUImageExportFormat *_format;
    NSDictionary *_imageProperties;
    NSDictionary *_coreGraphicsInfoDictionariesByAuxiliaryType;
}

@property (retain, nonatomic) NUColorSpace *colorSpace;
@property (copy, nonatomic) NUImageExportFormat *format;
@property (nonatomic) _Bool renderToData;
@property (copy) NSDictionary *imageProperties;
@property (copy) NSDictionary *coreGraphicsInfoDictionariesByAuxiliaryType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) CDStruct_1b6d18a9 time;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithComposition:(id)arg1;
- (void)submit:(CDUnknownBlockType)arg1;
- (id)newRenderJob;
- (long long)mediaComponentType;
- (id)initWithComposition:(id)arg1 destinationURL:(id)arg2;
- (id)initWithComposition:(id)arg1 exportFormat:(id)arg2;

@end
