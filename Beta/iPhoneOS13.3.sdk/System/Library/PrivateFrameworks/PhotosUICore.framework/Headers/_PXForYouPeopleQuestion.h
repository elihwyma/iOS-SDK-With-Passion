/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class PHPerson;

@interface _PXForYouPeopleQuestion : NSObject

{
    long long _questionType;
    PHPerson *_targetPerson;
}

@property (nonatomic, readonly) long long questionType;
@property (nonatomic, readonly) PHPerson *targetPerson;

- (id)initWithQuestionType:(long long)arg1 targetPerson:(id)arg2;

@end
