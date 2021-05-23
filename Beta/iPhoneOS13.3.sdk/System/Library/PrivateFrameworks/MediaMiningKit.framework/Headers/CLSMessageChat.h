/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSString;

@interface CLSMessageChat : NSObject

{
    NSArray *_recipientHandles;
    NSArray *_persons;
    long long _style;
    long long _state;
    long long _isArchived;
    long long _isFiltered;
    long long _hasHadSuccessfulQuery;
    long long _lastReadMessageTimeStamp;
    NSString *_accountID;
    NSData *_properties;
    NSString *_chatIdentifier;
    NSString *_serviceName;
    NSString *_guid;
    NSString *_roomname;
    NSString *_displayName;
    NSString *_lastAddressedLocalHandle;
    NSString *_accountLogin;
    NSString *_groupID;
    NSString *_engramID;
    NSString *_originalGroupID;
}

@property (nonatomic, readonly) NSArray *persons;
@property (nonatomic, readonly) NSArray *recipientHandles;
@property (nonatomic, readonly) long long style;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) long long isArchived;
@property (nonatomic, readonly) long long isFiltered;
@property (nonatomic, readonly) long long hasHadSuccessfulQuery;
@property (nonatomic, readonly) long long lastReadMessageTimeStamp;
@property (nonatomic, readonly) NSData *properties;
@property (nonatomic, readonly) NSString *accountID;
@property (nonatomic, readonly) NSString *chatIdentifier;
@property (nonatomic, readonly) NSString *serviceName;
@property (nonatomic, readonly) NSString *guid;
@property (nonatomic, readonly) NSString *roomname;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *lastAddressedLocalHandle;
@property (nonatomic, readonly) NSString *accountLogin;
@property (nonatomic, readonly) NSString *groupID;
@property (nonatomic, readonly) NSString *engramID;
@property (nonatomic, readonly) NSString *originalGroupID;

+ (void)enumerateAllChatsWithBlock:(CDUnknownBlockType)arg1;

- (id)debugDescription;
- (id)initWithChatRecord:(struct _IMDChatRecordStruct *)arg1;
- (void)enumerateAllAttachmentsWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateAllMessagesWithBlock:(CDUnknownBlockType)arg1;
- (id)allMessageGUIDs;
- (void)enumerateAllAssetIdentifiersWithBlock:(CDUnknownBlockType)arg1 historyLimit:(double)arg2 assetsMapping:(id)arg3;

@end
