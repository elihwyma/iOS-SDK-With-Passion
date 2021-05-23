/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <IMSharedUtilities/Swift-Protocol.h>

@interface IMTUConversationItem <Swift>

{
    unsigned long long _flags;
}

@property (nonatomic) unsigned long long flags;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)copyDictionaryRepresentation;
- (_Bool)isFromMe;
- (id)conversationUUID;

@end
