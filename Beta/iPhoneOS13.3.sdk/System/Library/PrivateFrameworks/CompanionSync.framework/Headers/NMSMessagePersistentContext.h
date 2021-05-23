/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

@class NSDate, NSDictionary, NSSet, NSString;

@interface NMSMessagePersistentContext : NSObject

{
    _Bool _fromRequest;
    _Bool _sendAcked;
    _Bool _processAcked;
    unsigned short _messageID;
    NSString *_idsIdentifier;
    NSDictionary *_userInfo;
    NSDictionary *_idsOptions;
    NSDate *_date;
    NSSet *_targetDeviceIDs;
}

@property (nonatomic) unsigned short messageID;
@property (copy, nonatomic) NSString *idsIdentifier;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (retain, nonatomic) NSDictionary *idsOptions;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic, getter=isFromRequest) _Bool fromRequest;
@property (nonatomic) _Bool sendAcked;
@property (nonatomic) _Bool processAcked;
@property (copy, nonatomic) NSSet *targetDeviceIDs;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
