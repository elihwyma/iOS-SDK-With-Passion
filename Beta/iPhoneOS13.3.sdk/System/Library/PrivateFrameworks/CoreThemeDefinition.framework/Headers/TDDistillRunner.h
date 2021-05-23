/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, TDDistiller, TDLogger;

@interface TDDistillRunner : NSObject

{
    _Bool _packDocument;
    TDDistiller *_distiller;
    NSURL *_carScratchURL;
    NSURL *_outputURL;
    TDLogger *_logger;
    NSString *_assetStoreVersionString;
    long long _assetStoreVersionNumber;
    NSString *_minDeploymentTarget;
}

@property (copy, nonatomic) NSURL *outputURL;
@property (retain, nonatomic) TDLogger *logger;
@property (copy) NSString *assetStoreVersionString;
@property long long assetStoreVersionNumber;
@property (nonatomic) _Bool packImagesInDocument;
@property (nonatomic) NSString *minDeploymentTarget;

- (id)init;
- (void)dealloc;
- (id)carScratchURL;
- (_Bool)_isDistillUnnecessaryForDocument:(id)arg1;
- (void)_moveScratchToOutputPath;
- (void)_removeScratchPath;
- (_Bool)runDistillWithDocumentURL:(id)arg1 outputURL:(id)arg2 attemptIncremental:(_Bool)arg3 forceDistill:(_Bool)arg4;

@end
