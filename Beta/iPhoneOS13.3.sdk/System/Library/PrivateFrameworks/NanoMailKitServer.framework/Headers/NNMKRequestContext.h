/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSString;

@interface NNMKRequestContext : NSObject

{
    _Bool _hasProtectedMessages;
    NSArray *_mailboxes;
    NSString *_conversationId;
    NSDate *_beforeDate;
    unsigned long long _count;
    unsigned long long _resendInterval;
    unsigned long long _messagesForSpecialMailbox;
}

@property (nonatomic) unsigned long long resendInterval;
@property (retain, nonatomic) NSArray *mailboxes;
@property (retain, nonatomic) NSString *conversationId;
@property (retain, nonatomic) NSDate *beforeDate;
@property (nonatomic) unsigned long long count;
@property (nonatomic) unsigned long long messagesForSpecialMailbox;
@property (nonatomic) _Bool hasProtectedMessages;

@end
