/*
 Image: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface STMSizeCacheEvent : NSObject

{
    unsigned int _flags;
    NSString *_path;
    unsigned long long _evtID;
}

@property (retain) NSString *path;
@property unsigned long long evtID;
@property unsigned int flags;

+ (id)eventWithPath:(id)arg1 flags:(unsigned int)arg2 event:(unsigned long long)arg3;

@end
