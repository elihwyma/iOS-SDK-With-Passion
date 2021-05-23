/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>

@class NSArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface BRCAggregateOperation : _BRCFrameworkOperation

{
    NSArray *_subOperations;
    NSMutableDictionary *_resultDictionary;
    CDUnknownBlockType _wrapperOperationCompletionHandler;
}

@property (copy, nonatomic) CDUnknownBlockType wrapperOperationCompletionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)main;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (_Bool)shouldRetryForError:(id)arg1;
- (id)initWithSyncContext:(id)arg1 subOperations:(id)arg2;

@end
