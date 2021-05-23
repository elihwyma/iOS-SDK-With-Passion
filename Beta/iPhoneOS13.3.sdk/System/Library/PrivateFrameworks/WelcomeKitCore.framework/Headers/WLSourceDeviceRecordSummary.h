/*
 Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSString, WLSourceDeviceAccount;

@interface WLSourceDeviceRecordSummary : NSObject

{
    _Bool _storeDataAsFile;
    _Bool _didDownload;
    WLSourceDeviceAccount *_account;
    unsigned long long _sqlID;
    NSString *_identifier;
    unsigned long long _itemSize;
    NSString *_relativePath;
    NSDate *_modifiedDate;
    NSDictionary *_metadata;
    NSString *_dataFilePath;
    unsigned long long _downloadSegmentCount;
}

@property (retain, nonatomic) WLSourceDeviceAccount *account;
@property (nonatomic) unsigned long long sqlID;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long itemSize;
@property (copy, nonatomic) NSString *relativePath;
@property (copy, nonatomic) NSDate *modifiedDate;
@property (copy, nonatomic) NSDictionary *metadata;
@property (nonatomic) _Bool storeDataAsFile;
@property (copy, nonatomic) NSString *dataFilePath;
@property (nonatomic) unsigned long long downloadSegmentCount;
@property (nonatomic) _Bool didDownload;

+ (id)_numberFormatter;
+ (id)summaryWithInfo:(id)arg1 account:(id)arg2;

- (id)initWithInfo:(id)arg1 account:(id)arg2;

@end
