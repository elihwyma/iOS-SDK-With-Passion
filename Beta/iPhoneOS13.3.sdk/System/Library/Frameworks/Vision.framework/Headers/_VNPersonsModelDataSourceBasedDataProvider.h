/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSString, VNPersonsModel;

@protocol VNPersonsModelDataSource;

__attribute__((visibility("hidden")))
@interface _VNPersonsModelDataSourceBasedDataProvider : NSObject

{
    VNPersonsModel *_personsModel;
    id <VNPersonsModelDataSource> _dataSource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (unsigned long long)faceModelPersonsCount;
- (id)faceModelUniqueIdentifierOfPersonAtIndex:(unsigned long long)arg1;
- (unsigned long long)faceModelIndexOfPersonWithUniqueIdentifier:(id)arg1;
- (unsigned long long)faceModelNumberOfFaceObservationsForPersonAtIndex:(unsigned long long)arg1;
- (id)faceModelFaceObservationAtIndex:(unsigned long long)arg1 forPersonAtIndex:(unsigned long long)arg2;
- (id)initWithPersonsModel:(id)arg1 dataSource:(id)arg2;

@end
