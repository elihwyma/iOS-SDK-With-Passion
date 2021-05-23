/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUSearchZeroKeywordBaseViewModel.h>

@class PHPerson;

@interface PUSearchZeroKeywordPersonViewModel : PUSearchZeroKeywordBaseViewModel

{
    PHPerson *_person;
}

@property (nonatomic, readonly) PHPerson *person;

- (id)title;
- (id)debugDictionary;
- (id)initWithRepresentedObject:(id)arg1 representedPerson:(id)arg2;

@end
