/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUSearchZeroKeywordBaseViewModel.h>

@class NSArray;

@interface PUSearchZeroKeywordSocialGroupViewModel : PUSearchZeroKeywordBaseViewModel

{
    NSArray *_socialGroup;
}

@property (nonatomic, readonly) NSArray *socialGroup;

- (id)debugDictionary;
- (id)initWithRepresentedObject:(id)arg1 representedSocialGroup:(id)arg2;

@end
