/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/MFDAMailAccountConsumer.h>

@class MFError, NSMutableDictionary, NSMutableSet, NSSet;

@interface MFDAMoveResponseConsumer : MFDAMailAccountConsumer

{
    NSSet *_sourceRemoteIDs;
    NSMutableDictionary *_destinationRemoteIDsBySourceRemoteIDs;
    NSMutableSet *_failures;
    MFError *_error;
    long long _statusCode;
}

@property (retain, nonatomic) MFError *error;
@property (nonatomic, readonly) long long statusCode;

- (void)taskFailed:(id)arg1 statusCode:(long long)arg2 error:(id)arg3;
- (void)resultsForMessageMove:(id)arg1;
- (id)initWithSourceRemoteIDs:(id)arg1 destinationRemoteIDsBySourceRemoteIDs:(id)arg2 failures:(id)arg3;

@end
