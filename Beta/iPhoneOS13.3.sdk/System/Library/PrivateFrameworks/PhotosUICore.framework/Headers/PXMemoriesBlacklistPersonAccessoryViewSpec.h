/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXMemoriesBlacklistAccessoryViewSpec.h>

@protocol PXPerson;

@interface PXMemoriesBlacklistPersonAccessoryViewSpec : PXMemoriesBlacklistAccessoryViewSpec

{
    id <PXPerson> _person;
}

@property (nonatomic, readonly) id <PXPerson> person;

+ (id)specWithPerson:(id)arg1;

- (id)initWithPerson:(id)arg1;

@end
