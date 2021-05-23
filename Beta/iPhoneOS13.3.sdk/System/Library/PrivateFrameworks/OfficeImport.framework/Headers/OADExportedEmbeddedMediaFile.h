/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADEmbeddedMediaFile.h>

@class TSPData;

__attribute__((visibility("hidden")))
@interface OADExportedEmbeddedMediaFile : OADEmbeddedMediaFile

{
    _Bool isAudioOnly;
    TSPData *_tspData;
}

@property (retain, nonatomic) TSPData *tspData;

- (_Bool)isAudioOnly;
- (void)setIsAudioOnly:(_Bool)arg1;

@end
