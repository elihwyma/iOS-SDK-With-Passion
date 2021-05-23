/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXInboxModelDataSource.h>

@class NSDictionary;

@interface PXInboxAggregateDataSource : PXInboxModelDataSource

{
    NSDictionary *_providerSourceDictionary;
}

@property (copy, nonatomic, readonly) NSDictionary *providerSourceDictionary;

- (id)initWithModels:(id)arg1 providerSourceDictionary:(id)arg2;
- (id)providerSourceForModel:(id)arg1;

@end
