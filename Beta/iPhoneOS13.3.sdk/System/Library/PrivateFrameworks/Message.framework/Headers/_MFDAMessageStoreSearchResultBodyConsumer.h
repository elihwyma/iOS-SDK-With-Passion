/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

#import <Message/Swift-Protocol.h>

@class MFConditionLock, MFError;

@protocol MFDAStreamingContentConsumer;

@interface _MFDAMessageStoreSearchResultBodyConsumer : NSObject <Swift>

{
    MFConditionLock *_doneCondition;
    id <MFDAStreamingContentConsumer> _streamConsumer;
    MFError *_error;
}

@property (retain, nonatomic) MFError *error;
@property (retain, nonatomic) id <MFDAStreamingContentConsumer> streamConsumer;

- (id)init;
- (void)actionFailed:(long long)arg1 forTask:(id)arg2 error:(id)arg3;
- (void)waitUntilDone;
- (_Bool)waitUntilDoneBeforeDate:(id)arg1;
- (_Bool)shouldBeginStreamingForMailMessage:(id)arg1 format:(int)arg2;
- (void)consumeData:(char *)arg1 length:(int)arg2 format:(int)arg3 mailMessage:(id)arg4;
- (void)didEndStreamingForMailMessage:(id)arg1;
- (void)searchResultFetchedWithResponses:(id)arg1;

@end
