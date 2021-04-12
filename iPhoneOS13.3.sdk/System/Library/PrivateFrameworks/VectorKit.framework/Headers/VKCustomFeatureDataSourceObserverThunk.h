//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VectorKit/VKCustomFeatureDataSourceObserver-Protocol.h>

__attribute__((visibility("hidden")))
@interface VKCustomFeatureDataSourceObserverThunk : NSObject <VKCustomFeatureDataSourceObserver>
{
    struct LabelCustomFeatureProvider _observer;
    struct _retain_ptr<id<VKCustomFeatureDataSource>, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> _dataSource;
}

- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)dataSource:(id)arg1 didChangeSceneID:(unsigned char)arg2;
- (void)dataSource:(id)arg1 didChangeSceneState:(unsigned char)arg2;
- (void)dataSource:(id)arg1 featuresDidChangeForRect:(CDStruct_02837cd9)arg2;
- (void)clearObserver;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1 observer:(struct LabelCustomFeatureProvider )arg2;

@end

