/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@interface FxMetaPlug : NSObject

{
    struct FxMetaPlugPriv *_priv;
}

+ (id)syntheticUUIDBasedOnString:(id)arg1;
+ (id)fxMetaPlugWithWrapper:(id)arg1 andData:(id)arg2;
+ (id)syntheticUUIDBasedOnIndex:(int)arg1;

- (void)dealloc;
- (id)data;
- (id)version;
- (id)uuid;
- (id)displayName;
- (id)groupUUID;
- (id)wrapper;
- (id)groupDisplayName;
- (id)fxPlugProperties;
- (id)initWithWrapper:(id)arg1 andData:(id)arg2;
- (id)versionDisplayName;
- (id)fxPlugDescriptor;

@end
