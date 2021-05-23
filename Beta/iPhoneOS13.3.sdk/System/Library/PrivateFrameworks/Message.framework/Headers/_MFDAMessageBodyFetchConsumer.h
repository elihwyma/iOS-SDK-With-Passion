/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

#import <Message/Swift-Protocol.h>

@class MFError, NSData, NSString;

@protocol MFDAStreamingContentConsumer;

@interface _MFDAMessageBodyFetchConsumer : NSObject <Swift>

{
    id <MFDAStreamingContentConsumer> _streamConsumer;
    _Bool _succeeded;
    MFError *_error;
    NSData *_data;
    _Bool _hasLocalCopyOfData;
}

@property (retain, nonatomic) id <MFDAStreamingContentConsumer> streamConsumer;
@property (nonatomic, readonly) _Bool succeeded;
@property (retain, nonatomic) MFError *error;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) _Bool hasLocalCopyOfData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)handleResponse:(id)arg1 error:(id)arg2;
- (id)streamingContentConsumer;
- (_Bool)wantsData;

@end
