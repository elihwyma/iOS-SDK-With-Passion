/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@protocol _TIUITextChecking;

@interface TITextChecker : NSObject

{
    id <_TIUITextChecking> _checker;
}

@property (nonatomic, readonly) id <_TIUITextChecking> checker;

+ (id)_UITextCheckerWithAsynchronousLoading:(_Bool)arg1;

- (id)init;
- (struct _NSRange)checkSpellingOfString:(id)arg1 startingAt:(long long)arg2 language:(id)arg3 wrap:(_Bool)arg4 correction:(id *)arg5;
- (id)initWithAsynchronousLoading:(_Bool)arg1;
- (_Bool)doneLoading;

@end
