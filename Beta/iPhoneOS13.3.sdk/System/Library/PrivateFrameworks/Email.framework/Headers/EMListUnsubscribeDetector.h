/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSObject.h>

@protocol EMMutableDictionaryProtocol;

@interface EMListUnsubscribeDetector : NSObject

{
    id <EMMutableDictionaryProtocol> _persistentDictionary;
}

+ (id)receivingAccountFromMessage:(id)arg1;

- (id)init;
- (id)initWithMutableDictionary:(id)arg1;
- (id)commandForMessage:(id)arg1;
- (_Bool)_shouldIgnoreMessageWithHeaders:(id)arg1;
- (id)_persistentKeyForHeaders:(id)arg1;
- (id)_normalizedAddress:(id)arg1;
- (id)_listIDString:(id)arg1;
- (id)_senderString:(id)arg1;
- (void)acceptCommand:(id)arg1;
- (void)ignoreCommand:(id)arg1;
- (void)removeAllPersistedCommands;

@end
