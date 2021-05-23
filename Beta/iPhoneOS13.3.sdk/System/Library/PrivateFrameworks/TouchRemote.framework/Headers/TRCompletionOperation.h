/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <TouchRemote/TROperation.h>

@interface TRCompletionOperation : TROperation

{
    _Bool _success;
    long long _errorCode;
}

@property (nonatomic) _Bool success;
@property (nonatomic) long long errorCode;

- (void)execute;

@end
