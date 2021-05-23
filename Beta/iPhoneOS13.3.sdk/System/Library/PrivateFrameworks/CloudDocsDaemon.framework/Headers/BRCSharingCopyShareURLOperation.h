/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/BRCSharingModifyShareOperation.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BRCSharingCopyShareURLOperation : BRCSharingModifyShareOperation

{
    NSString *_appName;
}

- (void)main;
- (_Bool)shouldRetryForError:(id)arg1;
- (id)createActivity;
- (void)_completedWithURL:(id)arg1 error:(id)arg2;
- (id)initWithShare:(id)arg1 zone:(id)arg2 appName:(id)arg3;

@end
