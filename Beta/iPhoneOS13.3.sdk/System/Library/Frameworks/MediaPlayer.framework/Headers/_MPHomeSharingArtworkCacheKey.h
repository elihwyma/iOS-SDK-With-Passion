/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@interface _MPHomeSharingArtworkCacheKey : NSObject

{
    unsigned long long _persistentID;
    struct CGSize _size;
}

@property (nonatomic, readonly) unsigned long long persistentID;
@property (nonatomic, readonly) struct CGSize size;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithPersistentID:(unsigned long long)arg1 size:(struct CGSize)arg2;

@end
