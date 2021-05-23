/*
 Image: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSDictionary, NSURL;

@interface BCMessageData : NSObject

{
    NSURL *_url;
    NSData *_data;
    NSDictionary *_jsonDictionary;
    NSDictionary *_replyMessageDictionary;
    NSDictionary *_receivedMessageDictionary;
}

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSDictionary *jsonDictionary;
@property (retain, nonatomic) NSDictionary *replyMessageDictionary;
@property (retain, nonatomic) NSDictionary *receivedMessageDictionary;
@property (nonatomic, readonly) NSDictionary *combinedDictionary;
@property (nonatomic, readonly) NSArray *imagesArray;

- (void)decodeData:(id)arg1 dictionaryKey:(id)arg2;
- (id)initWithUrl:(id)arg1 data:(id)arg2;

@end
