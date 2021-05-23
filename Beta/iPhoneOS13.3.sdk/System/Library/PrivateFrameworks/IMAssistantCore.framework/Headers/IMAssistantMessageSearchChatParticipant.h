/*
 Image: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface IMAssistantMessageSearchChatParticipant : NSObject

{
    _Bool _isMe;
    NSString *_handle;
    NSArray *_contactIdentifiers;
}

@property (copy, nonatomic, readonly) NSString *handle;
@property (copy, nonatomic, readonly) NSArray *contactIdentifiers;
@property (nonatomic, readonly) _Bool isMe;

- (id)initWithHandle:(id)arg1 contactIdentifiers:(id)arg2 isMe:(_Bool)arg3;
- (_Bool)matchesPerson:(id)arg1 withUnifiedContactIdentifiers:(id)arg2;

@end
