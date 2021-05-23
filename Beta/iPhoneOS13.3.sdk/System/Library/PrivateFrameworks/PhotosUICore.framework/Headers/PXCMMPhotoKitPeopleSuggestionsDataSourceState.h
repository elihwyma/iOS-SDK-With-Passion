/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSDictionary, PHFetchResult;

@interface PXCMMPhotoKitPeopleSuggestionsDataSourceState : NSObject <Swift>

{
    PHFetchResult *_people;
    NSDictionary *_personSuggestionsByPerson;
}

@property (nonatomic, readonly) PHFetchResult *people;
@property (nonatomic, readonly) NSDictionary *personSuggestionsByPerson;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)stateUpdatedWithChange:(id)arg1 changeDetails:(id *)arg2;
- (id)initWithPeople:(id)arg1 personSuggestionsByPerson:(id)arg2;

@end
