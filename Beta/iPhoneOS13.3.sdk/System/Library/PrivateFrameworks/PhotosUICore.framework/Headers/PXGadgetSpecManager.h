/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSMutableSet, NSString, PXExtendedTraitCollection, PXGadgetSpec;

@interface PXGadgetSpecManager : PXObservable <Swift>

{
    PXGadgetSpec *_currentGadgetSpec;
    Class _gadgetSpecClass;
    long long _scrollAxis;
    PXExtendedTraitCollection *_traitCollection;
    NSMutableSet *_updatedGadgets;
}

@property (retain, nonatomic) PXGadgetSpec *currentGadgetSpec;
@property (nonatomic, readonly) Class gadgetSpecClass;
@property (nonatomic, readonly) long long scrollAxis;
@property (retain, nonatomic) PXExtendedTraitCollection *traitCollection;
@property (retain, nonatomic) NSMutableSet *updatedGadgets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)mutableChangeObject;
- (id)initWithGadgetSpecClass:(Class)arg1 scrollAxis:(long long)arg2 traitCollection:(id)arg3;
- (void)updateGadgetsToSpecIfNeeded:(id)arg1;
- (void)_extendedTraitCollection:(id)arg1 didChange:(unsigned long long)arg2;

@end
