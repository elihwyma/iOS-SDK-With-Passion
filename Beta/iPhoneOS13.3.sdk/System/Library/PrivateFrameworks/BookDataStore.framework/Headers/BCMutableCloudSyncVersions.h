/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <Foundation/NSObject.h>

@class NSPersistentHistoryToken, NSString;

@interface BCMutableCloudSyncVersions : NSObject

{
    NSString *_dataType;
    long long _cloudVersion;
    long long _localVersion;
    long long _syncVersion;
    NSPersistentHistoryToken *_historyToken;
    long long _historyTokenOffset;
}

@property (copy, nonatomic) NSString *dataType;
@property (copy, nonatomic) NSPersistentHistoryToken *historyToken;
@property (nonatomic) long long historyTokenOffset;
@property (nonatomic) long long cloudVersion;
@property (nonatomic) long long localVersion;
@property (nonatomic) long long syncVersion;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCloudSyncVersions:(id)arg1;

@end
