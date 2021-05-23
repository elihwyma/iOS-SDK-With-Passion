/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSDate, _CDEventIndexerBookmark;

@protocol OS_os_transaction;

@interface _CDEventIndexerContext : NSObject

{
    _CDEventIndexerBookmark *_bookmark;
    long long _currentVersion;
    unsigned long long _batchSize;
    CDUnknownBlockType _completion;
    NSDate *_indexDate;
    NSObject<OS_os_transaction> *_transaction;
}

@property (retain, nonatomic) _CDEventIndexerBookmark *bookmark;
@property (nonatomic) long long currentVersion;
@property (nonatomic) unsigned long long batchSize;
@property (copy, nonatomic) CDUnknownBlockType completion;
@property (nonatomic, readonly) NSDate *indexDate;
@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction;

- (id)init;
- (id)description;
- (_Bool)isBookmarkValid;
- (_Bool)isBookmarkValidInRecoverableThreshold;

@end
