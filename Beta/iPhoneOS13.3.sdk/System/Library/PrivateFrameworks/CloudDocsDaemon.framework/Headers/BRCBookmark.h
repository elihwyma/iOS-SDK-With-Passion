/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class BRCAccountSession, BRCAppLibrary, BRCLocalItem, BRCRelativePath, BRCServerZone, NSData;

__attribute__((visibility("hidden")))
@interface BRCBookmark : NSObject

{
    BRCAccountSession *_session;
    BRCAppLibrary *_appLibrary;
    NSData *_bookmarkData;
    BRCLocalItem *_target;
    BRCServerZone *_targetServerZone;
    BRCRelativePath *_targetRelpath;
    _Bool _targetResolved;
    _Bool _dataResolved;
    _Bool _containsItemID;
}

@property (nonatomic, readonly) _Bool containsItemID;
@property (nonatomic, readonly) BRCServerZone *targetServerZone;
@property (nonatomic, readonly) BRCLocalItem *target;

+ (id)createName;
+ (void)unlinkAliasAtPath:(id)arg1;

- (id)initWithTarget:(id)arg1 owningAppLibrary:(id)arg2 path:(id)arg3 session:(id)arg4;
- (_Bool)resolveWithError:(id *)arg1;
- (id)writeUnderParent:(id)arg1 name:(id)arg2 error:(id *)arg3;
- (id)initWithRelpath:(id)arg1;
- (void)_computeSignature:(unsigned char [32])arg1;
- (int)_validateSignatureWithFd:(int)arg1;
- (_Bool)_resolveTargetWithError:(id *)arg1;
- (_Bool)_resolveDataWithError:(id *)arg1;

@end
