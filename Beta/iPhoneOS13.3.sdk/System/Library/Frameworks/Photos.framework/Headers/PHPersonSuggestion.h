/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class PHFace, PHPerson;

@interface PHPersonSuggestion : NSObject

{
    _Bool _confirmed;
    PHFace *_keyFace;
    PHPerson *_person;
}

@property (nonatomic, readonly) PHFace *keyFace;
@property (nonatomic, readonly) PHPerson *person;
@property (nonatomic, readonly) _Bool confirmed;

- (id)initWithKeyFace:(id)arg1 person:(id)arg2 confirmed:(_Bool)arg3;

@end
