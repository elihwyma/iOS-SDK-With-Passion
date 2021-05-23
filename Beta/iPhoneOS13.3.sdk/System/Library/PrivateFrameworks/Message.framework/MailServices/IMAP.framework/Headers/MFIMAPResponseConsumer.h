/*
 Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

#import <NSObject.h>

@class NSMutableDictionary;

@interface MFIMAPResponseConsumer : NSObject

{
    NSMutableDictionary *_consumersBySection;
}

- (void)dealloc;
- (void)done;
- (void)addConsumer:(id)arg1 forSection:(id)arg2;
- (void)appendData:(id)arg1 forSection:(id)arg2;
- (id)consumersBySection;

@end
