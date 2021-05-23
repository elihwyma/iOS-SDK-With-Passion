/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VKCustomFeatureDataSourceObserverThunk : NSObject

{
    struct LabelCustomFeatureProvider *_observer;
    struct _retain_ptr<id<VKCustomFeatureDataSource>, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> _dataSource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id).cxx_construct;
- (void)dataSource:(id)arg1 featuresDidChangeForRect:(CDStruct_02837cd9)arg2;
- (void)dataSource:(id)arg1 didChangeSceneState:(unsigned char)arg2;
- (void)dataSource:(id)arg1 didChangeSceneID:(unsigned char)arg2;
- (id)initWithDataSource:(id)arg1 observer:(struct LabelCustomFeatureProvider *)arg2;
- (void)clearObserver;

@end
