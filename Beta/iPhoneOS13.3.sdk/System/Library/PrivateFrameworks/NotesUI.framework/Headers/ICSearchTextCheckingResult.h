/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSTextCheckingResult.h>

@class NSString;

@interface ICSearchTextCheckingResult : NSTextCheckingResult

{
    NSString *_csEvaluatorMatchString;
    struct _NSRange _ic_range;
}

@property (nonatomic) struct _NSRange ic_range;
@property (retain, nonatomic) NSString *csEvaluatorMatchString;

- (struct _NSRange)range;
- (id)initWithRange:(struct _NSRange)arg1;
- (id)initWithRange:(struct _NSRange)arg1 csEvaluatorMatchString:(id)arg2;

@end
