/*
 Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

#import <NSObject.h>

@class MFIMAPResponseConsumer, NSArray, NSMutableArray;

@interface _MFIMAPCommandParameters : NSObject

{
    int _command;
    NSArray *_arguments;
    NSMutableArray *_untaggedResponses;
    unsigned long long _sequenceNumber;
    MFIMAPResponseConsumer *_responseConsumer;
}

@property (nonatomic) int command;
@property (retain, nonatomic) NSArray *arguments;
@property (retain, nonatomic) NSMutableArray *untaggedResponses;
@property (nonatomic) unsigned long long sequenceNumber;
@property (retain, nonatomic) MFIMAPResponseConsumer *responseConsumer;

- (id)initWithCommand:(int)arg1;
- (id)initWithCommand:(int)arg1 arguments:(id)arg2;
- (id)initWithCommand:(int)arg1 sequenceNumber:(unsigned long long)arg2;

@end
