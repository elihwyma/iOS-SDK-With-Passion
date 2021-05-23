/*
 Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import <Foundation/NSObject.h>

@class ACAccount, NSData, NSDictionary, NSError, NSMutableDictionary, NSString;

@protocol NSSecureCoding;

__attribute__((visibility("hidden")))
@interface ACRemoteDeviceMessage : NSObject

{
    NSMutableDictionary *_payload;
    NSData *_data;
    _Bool _needsReply;
    _Bool _isReply;
    NSString *_identifier;
}

@property (nonatomic, readonly) NSString *command;
@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, readonly) NSDictionary *options;
@property (nonatomic, readonly) NSString *sentMessageIdentifier;
@property (nonatomic, readonly) _Bool success;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSObject<NSSecureCoding> *result;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) _Bool needsReply;
@property (nonatomic) _Bool isReply;

+ (id)_whitelistedClasses;
+ (id)actionMessageWithCommand:(id)arg1 account:(id)arg2 options:(id)arg3;
+ (id)replyForMessage:(id)arg1 withSuccess:(_Bool)arg2 result:(id)arg3 error:(id)arg4;
+ (id)replyForMessage:(id)arg1 withSuccess:(_Bool)arg2 error:(id)arg3;

- (id)init;
- (id)description;
- (id)initWithData:(id)arg1;
- (void)_invalidateCachedData;
- (void)_setPayloadObject:(id)arg1 forKey:(id)arg2;
- (id)_payloadObjectForKey:(id)arg1;

@end
