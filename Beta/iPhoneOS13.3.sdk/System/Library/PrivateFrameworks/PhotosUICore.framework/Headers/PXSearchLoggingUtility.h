/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@interface PXSearchLoggingUtility : NSObject

{
    _Bool _nextTokenSuggestionTappedInCurrentSearchSession;
    _Bool _wordCompletionTappedInCurrentSearchSession;
}

@property (nonatomic) _Bool nextTokenSuggestionTappedInCurrentSearchSession;
@property (nonatomic) _Bool wordCompletionTappedInCurrentSearchSession;

- (void)setNextTokenSuggestionTappedInCurrentSearchSession;
- (void)setWordCompletionTappedInCurrentSearchSession;
- (void)logCurrentState;

@end
