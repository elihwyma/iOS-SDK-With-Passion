/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSSet;

@interface PLAssetCollectionGenerationResult : NSObject

{
    _Bool _frequentLocationsDidChange;
    NSSet *_insertedOrUpdatedMoments;
}

@property (nonatomic, readonly) NSSet *insertedOrUpdatedMoments;
@property (nonatomic, readonly) _Bool frequentLocationsDidChange;

- (id)initWithInsertedOrUpdatedMoments:(id)arg1 frequentLocationsDidChange:(_Bool)arg2;

@end
