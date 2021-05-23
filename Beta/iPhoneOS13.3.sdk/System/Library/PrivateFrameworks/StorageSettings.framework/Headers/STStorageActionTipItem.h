/*
 Image: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface STStorageActionTipItem : NSObject

{
    _Bool _recoverable;
    long long _size;
    NSDate *_lastUsedDate;
    NSDate *_createdDate;
}

@property long long size;
@property (getter=isRecoverable) _Bool recoverable;
@property (retain) NSDate *lastUsedDate;
@property (retain) NSDate *createdDate;

@end
