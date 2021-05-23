/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface FCHeadlineExperimentalTitleMetadata : NSObject

{
    _Bool _isTitleExperimental;
    int _treatmentState;
    long long _arrayIndexUsedforTitle;
    NSString *_chosenTitle;
}

@property (nonatomic, readonly) _Bool isTitleExperimental;
@property (nonatomic, readonly) long long arrayIndexUsedforTitle;
@property (nonatomic, readonly) int treatmentState;
@property (copy, nonatomic, readonly) NSString *chosenTitle;

- (id)initWithChosenTitle:(id)arg1 isTitleExperimental:(_Bool)arg2 arrayIndexUsedforTitle:(long long)arg3 treatmentState:(int)arg4;

@end
