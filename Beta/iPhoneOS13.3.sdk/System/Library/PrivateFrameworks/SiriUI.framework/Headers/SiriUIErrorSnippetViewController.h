/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <SiriUI/SiriUISnippetViewController.h>

@class NSError;

@interface SiriUIErrorSnippetViewController : SiriUISnippetViewController

{
    NSError *_error;
}

- (id)initWithError:(id)arg1;
- (void)loadView;
- (id)snippet;

@end
