/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@protocol NSCoding;

@interface ENSSKeychainQuery : NSObject

{
    NSString *_account;
    NSString *_service;
    NSString *_label;
    NSData *_passwordData;
    NSString *_accessGroup;
    unsigned long long _synchronizationMode;
}

@property (copy, nonatomic) NSString *account;
@property (copy, nonatomic) NSString *service;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *accessGroup;
@property (nonatomic) unsigned long long synchronizationMode;
@property (copy, nonatomic) NSData *passwordData;
@property (copy, nonatomic) id <NSCoding> passwordObject;
@property (copy, nonatomic) NSString *password;

+ (id)errorWithCode:(int)arg1;
+ (_Bool)isSynchronizationAvailable;

- (id)query;
- (_Bool)save:(id *)arg1;
- (_Bool)deleteItem:(id *)arg1;
- (_Bool)fetch:(id *)arg1;
- (id)fetchAll:(id *)arg1;

@end
