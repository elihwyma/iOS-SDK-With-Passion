/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface IMSPIChat : NSObject

{
    _Bool _isGroup;
    _Bool _isBlackholed;
    NSString *_guid;
    NSString *_chatIdentifier;
    NSString *_serviceName;
    NSString *_displayName;
    NSArray *_handles;
}

@property (retain) NSString *guid;
@property (retain) NSString *chatIdentifier;
@property (retain) NSString *serviceName;
@property (retain) NSString *displayName;
@property _Bool isGroup;
@property (retain) NSArray *handles;
@property (readonly) _Bool isBlackholed;

+ (void)enumerateAllChatsWithBlock:(CDUnknownBlockType)arg1;

- (id)description;
- (id)initWithChatRecord:(struct _IMDChatRecordStruct *)arg1;
- (void)enumerateAllAttachmentsWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateAllMessagesWithBlock:(CDUnknownBlockType)arg1;

@end
