/*
 Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface NMSContainer : NSObject

{
    NSString *_name;
    NSNumber *_persistentID;
    unsigned long long _type;
    NSNumber *_addedDate;
    NSNumber *_playedDate;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSNumber *persistentID;
@property (nonatomic, readonly) unsigned long long type;
@property (retain, nonatomic) NSNumber *addedDate;
@property (retain, nonatomic) NSNumber *playedDate;

- (id)initWithPersistentID:(id)arg1 name:(id)arg2 type:(unsigned long long)arg3;

@end
