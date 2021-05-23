/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface PXForYouPeopleQuestionsDataSource : NSObject

{
    NSArray *_questions;
}

@property (retain, nonatomic) NSArray *questions;

+ (id)_fetchData;
+ (id)_suggestedNames;

- (id)init;

@end
