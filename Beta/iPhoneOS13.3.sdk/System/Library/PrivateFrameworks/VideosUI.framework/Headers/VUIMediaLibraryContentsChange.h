/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

#import <VideosUI/Swift-Protocol.h>

@interface VUIMediaLibraryContentsChange : NSObject <Swift>

{
    unsigned long long _revision;
}

@property (nonatomic) unsigned long long revision;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRevision:(unsigned long long)arg1;

@end
