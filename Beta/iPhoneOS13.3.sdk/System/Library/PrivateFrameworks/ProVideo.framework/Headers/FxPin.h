/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@interface FxPin : NSObject

{
    struct FxPinPriv *_priv;
}

- (id)init;
- (void)dealloc;
- (id)description;
- (int)index;
- (id)uuid;
- (void)setUUID:(id)arg1;
- (id)displayName;
- (id)properties;
- (int)direction;
- (void)setDirection:(int)arg1;
- (id)stream;
- (void)setDisplayName:(id)arg1;
- (Class)valueClass;
- (void)setValueClass:(Class)arg1;
- (void)setDescription:(id)arg1;
- (id)parentPlug;
- (void)setParentPlug:(id)arg1;

@end
