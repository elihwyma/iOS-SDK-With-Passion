/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSDate, NSSet, NSString;

@interface PKAccountEvent : NSObject

{
    _Bool _blockNotification;
    NSString *_identifier;
    NSString *_accountIdentifier;
    long long _type;
    NSDate *_date;
    NSDate *_expirationDate;
    NSSet *_items;
    unsigned long long _updateReasons;
}

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *accountIdentifier;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSDate *expirationDate;
@property (nonatomic) _Bool blockNotification;
@property (retain, nonatomic) NSSet *items;
@property (nonatomic, readonly) unsigned long long updateReasons;
@property (nonatomic, readonly) _Bool updateReasonIsInitialDownload;

+ (_Bool)supportsSecureCoding;
+ (id)eventIdentifierFromRecordName:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)recordName;
- (unsigned long long)itemType;
- (void)addUpdateReasons:(unsigned long long)arg1;
- (void)encodeWithCloudStoreCoder:(id)arg1;
- (id)initWithCloudStoreCoder:(id)arg1;
- (id)recordTypesAndNames;
- (void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)arg1;
- (_Bool)isEqualToAccountEvent:(id)arg1;
- (id)recordNameForItem:(id)arg1;
- (id)updateReasonsDescription;

@end
