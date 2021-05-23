/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@interface PPContactDiskCache : NSObject

{
    long long _lastCreatedAt;
}

+ (id)sharedInstance;

- (id)init;
- (id)loadNameRecordCache;
- (_Bool)writeNameRecordCache:(id)arg1 fullLoadFromSource:(_Bool)arg2;
- (_Bool)deleteNameRecordCache;

@end
