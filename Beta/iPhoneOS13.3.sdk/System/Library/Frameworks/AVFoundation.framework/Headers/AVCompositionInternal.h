/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAssetInspector, AVAssetInspectorLoader, AVDispatchOnce, NSDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface AVCompositionInternal : NSObject

{
    struct OpaqueFigMutableComposition *mutableComposition;
    AVDispatchOnce *formatReaderInitializationOnce;
    AVDispatchOnce *assetInspectorInitializationOnce;
    AVDispatchOnce *tracksInitializationOnce;
    struct OpaqueFigFormatReader *formatReader;
    AVAssetInspectorLoader *assetInspectorLoader;
    AVAssetInspector *assetInspector;
    struct CGSize naturalSize;
    NSDictionary *URLAssetInitializationOptions;
    NSMutableArray *tracks;
    AVDispatchOnce *figAssetInitializationOnce;
    struct OpaqueFigAsset *figAsset;
}

@end
