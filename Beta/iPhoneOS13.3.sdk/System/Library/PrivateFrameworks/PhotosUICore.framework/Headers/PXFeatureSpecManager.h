/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXExtendedTraitCollection, PXFeatureSpec;

@interface PXFeatureSpecManager : PXObservable <Swift>

{
    PXFeatureSpec *_spec;
    PXExtendedTraitCollection *_extendedTraitCollection;
    unsigned long long _options;
}

@property (nonatomic, readonly) PXExtendedTraitCollection *extendedTraitCollection;
@property (nonatomic, readonly) PXFeatureSpec *spec;
@property (nonatomic, readonly) unsigned long long options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)mutableChangeObject;
- (void)_setSpec:(id)arg1;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)createSpec;
- (id)initWithExtendedTraitCollection:(id)arg1;
- (Class)specClass;
- (_Bool)shouldUpdateSpecForExtendedTraitCollection:(id)arg1 change:(unsigned long long)arg2;
- (void)invalidateSpec;
- (void)_updateSpec;

@end
