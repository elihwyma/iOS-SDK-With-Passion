/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/_PXForYouPeopleQuestion.h>

@class NSString;

@interface _PXForYouPeopleAutonamingQuestion : _PXForYouPeopleQuestion

{
    NSString *_possibleName;
}

@property (nonatomic, readonly) NSString *possibleName;

- (id)initWithQuestionType:(long long)arg1 targetPerson:(id)arg2 possibleName:(id)arg3;

@end
