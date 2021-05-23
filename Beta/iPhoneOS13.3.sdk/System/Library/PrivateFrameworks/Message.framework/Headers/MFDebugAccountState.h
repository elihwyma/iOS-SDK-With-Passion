/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class MailAccount, NSArray, NSString;

@interface MFDebugAccountState : NSObject

{
    NSString *_identifier;
    NSArray *_lastKnownCapabilities;
    MailAccount *_mailAccount;
}

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSArray *lastKnownCapabilities;
@property (retain, nonatomic) MailAccount *mailAccount;

- (id)dictionaryRepresentation;
- (id)initWithStateEventDictionary:(id)arg1 identifier:(id)arg2 lastKnownCapabilities:(id)arg3;

@end
