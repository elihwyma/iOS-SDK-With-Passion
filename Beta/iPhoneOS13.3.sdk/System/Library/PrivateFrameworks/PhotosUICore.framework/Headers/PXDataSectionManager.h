/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSArray, NSString, PXArrayChangeDetails, PXDataSection;

@protocol NSObject><NSCopying;

@interface PXDataSectionManager : PXObservable <Swift>

{
    PXDataSection *_dataSection;
    NSArray *_childDataSectionManagers;
    id <NSObject><NSCopying> _outlineObject;
    PXArrayChangeDetails *_changeDetailsFromPreviousDataSection;
    PXDataSection *_previousDataSection;
    unsigned long long _previousDataSectionIdentifier;
}

@property (copy, nonatomic) NSArray *childDataSectionManagers;
@property (retain, nonatomic) id <NSObject><NSCopying> outlineObject;
@property (nonatomic, readonly) PXDataSection *dataSection;
@property (nonatomic, readonly) PXDataSection *dataSectionIfCreated;
@property (nonatomic, readonly) PXArrayChangeDetails *changeDetailsFromPreviousDataSection;
@property (nonatomic, readonly) PXDataSection *previousDataSection;
@property (nonatomic, readonly) unsigned long long previousDataSectionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)initWithChildDataSectionManagers:(id)arg1;
- (id)createDataSection;
- (id)auxiliaryObjectForKey:(id)arg1 dataSectionObject:(id)arg2 hintIndex:(long long)arg3;
- (id)changeDetailsForChildDataSectionManagersChangeDetails:(id)arg1;
- (id)changeDetailsForChangedChildDataSectionManager:(id)arg1 childChangeDetails:(id)arg2;
- (void)_registerAsChangeObserverForDataSectionManagers:(id)arg1;
- (void)_unregisterAsChangeObserverForDataSectionManagers:(id)arg1;
- (void)_setDataSection:(id)arg1 changeDetails:(id)arg2;
- (void)updateDataSectionWithChangeDetails:(id)arg1;
- (void)childDataSectionManager:(id)arg1 didChangeDataSectionWithChangeDetails:(id)arg2;

@end
