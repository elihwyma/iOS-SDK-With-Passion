/*
 Image: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
 */

#import <Foundation/NSObject.h>

@class NSData, NSError, NSMutableData, NSString;

@protocol BLM3U8ParserDelegate;

@interface BLM3U8Parser : NSObject

{
    _Bool _collectForRewrite;
    id <BLM3U8ParserDelegate> _delegate;
    NSData *_data;
    NSMutableData *_bytes;
    NSError *_error;
    NSMutableData *_collectedData;
}

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSMutableData *bytes;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSMutableData *collectedData;
@property (weak, nonatomic) id <BLM3U8ParserDelegate> delegate;
@property (nonatomic) _Bool collectForRewrite;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithURL:(id)arg1;
- (id)initWithData:(id)arg1;
- (_Bool)parseWithError:(id *)arg1;
- (_Bool)rewriteWithURL:(id)arg1;
- (unsigned long long)consumeBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (void)processLine;
- (id)parseAttributeList:(id)arg1;
- (void)saveLine:(id)arg1;

@end
