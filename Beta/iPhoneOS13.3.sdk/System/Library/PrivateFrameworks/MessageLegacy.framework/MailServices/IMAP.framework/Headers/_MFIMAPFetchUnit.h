/*
 Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

#import <NSObject.h>

@class MFIMAPFetchResult, NSString;

@protocol MFDataConsumer;

@interface _MFIMAPFetchUnit : NSObject

{
    MFIMAPFetchResult *_expectedFetchResult;
    unsigned int _uid;
    id <MFDataConsumer> _bodyDataConsumer;
    NSString *_consumerSection;
    NSString *_fetchItem;
}

@property (retain, nonatomic) id <MFDataConsumer> bodyDataConsumer;
@property (retain, nonatomic) NSString *consumerSection;
@property (copy, nonatomic) NSString *fetchItem;
@property (nonatomic) unsigned int uid;

- (_Bool)matchesFetchResponse:(id)arg1;
- (id)copyFailedFetchResponse;
- (void)_setupExpectedFetchResult;

@end
