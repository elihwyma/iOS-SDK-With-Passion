/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class GEOFeatureStyleAttributes, MKQuadTrie, NSHashTable, NSString;

@protocol MKCustomFeatureStoreDelegate;

@interface _MKCustomFeatureStore : NSObject

{
    MKQuadTrie *_annotationsTrie;
    NSHashTable *_observers;
    _Bool _isClusteringEnabled;
    GEOFeatureStyleAttributes *_clusterStyleAttributes;
    NSString *_annotationText;
    NSString *_annotationLocale;
    unsigned char _sceneID;
    unsigned char _sceneState;
    id <MKCustomFeatureStoreDelegate> _delegate;
}

@property (weak, nonatomic) id <MKCustomFeatureStoreDelegate> delegate;
@property (nonatomic, readonly) _Bool isClusteringEnabled;
@property (copy, nonatomic) GEOFeatureStyleAttributes *clusterStyleAttributes;
@property (nonatomic) unsigned char sceneID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)allAnnotations;
- (void)setAnnotations:(id)arg1;
- (void)addAnnotations:(id)arg1;
- (id)annotationsInMapRect:(CDStruct_02837cd9)arg1;
- (void)removeAnnotations:(id)arg1;
- (id)initWithClustering:(_Bool)arg1;
- (void)getClusterAnnotationTextForClusterFeatureCount:(unsigned long long)arg1 text:(id *)arg2 locale:(id *)arg3;
- (void)getClusterImageTextForClusterFeatureCount:(unsigned long long)arg1 text:(id *)arg2 locale:(id *)arg3;
- (unsigned char)sceneState;
- (void)_setSceneState:(unsigned char)arg1;
- (void)_clearAnnotations;
- (void)_invalidateRect:(CDStruct_02837cd9)arg1;
- (void)showScene;
- (void)hideScene;
- (void)setClusterAnnotationText:(id)arg1 locale:(id)arg2;
- (unsigned long long)annotationCount;

@end
