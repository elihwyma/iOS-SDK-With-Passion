/*
 Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@interface NMSMediaItemDownloadInfo : NSObject

{
    _Bool _manuallyAdded;
    NSNumber *_identifier;
    unsigned long long _size;
}

@property (nonatomic, readonly) NSNumber *identifier;
@property (nonatomic, readonly) unsigned long long size;
@property (nonatomic, readonly, getter=isManuallyAdded) _Bool manuallyAdded;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithIdentifier:(id)arg1 size:(unsigned long long)arg2 manuallyAdded:(_Bool)arg3;

@end
