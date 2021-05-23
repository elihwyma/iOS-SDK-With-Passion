/*
 Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

#import <Foundation/NSObject.h>

@class FPActionOperationLocator, NSString;

@interface FPDMoveAtom : NSObject

{
    unsigned char _kind;
    _Bool _useAtomicMove;
    _Bool _useDiskWriter;
    FPActionOperationLocator *_root;
    FPActionOperationLocator *_source;
    NSString *_targetName;
    FPActionOperationLocator *_targetFolder;
    unsigned long long _materializeOption;
    unsigned long long _targetMaterializeOption;
}

@property (nonatomic, readonly) unsigned char kind;
@property (nonatomic, readonly) FPActionOperationLocator *root;
@property (nonatomic, readonly) FPActionOperationLocator *source;
@property (nonatomic, readonly) NSString *targetName;
@property (nonatomic, readonly) FPActionOperationLocator *targetFolder;
@property (nonatomic, readonly) _Bool useAtomicMove;
@property (nonatomic, readonly) _Bool useDiskWriter;
@property (nonatomic, readonly) unsigned long long materializeOption;
@property (nonatomic, readonly) unsigned long long targetMaterializeOption;

+ (id)atomForMoving:(id)arg1 toTargetFolder:(id)arg2 as:(id)arg3 root:(id)arg4 atomically:(_Bool)arg5 sourceMaterializeOption:(unsigned long long)arg6 targetMaterializeOption:(unsigned long long)arg7 useDiskWriter:(_Bool)arg8;
+ (id)atomForPostFolderUnderRoot:(id)arg1 atomically:(_Bool)arg2 useDiskWriter:(_Bool)arg3;

- (id)description;
- (_Bool)shouldAccountForDownloadOfSourceItemForMoveInfo:(id)arg1 extensionManager:(id)arg2;
- (id)initWithKind:(unsigned char)arg1 source:(id)arg2 targetName:(id)arg3 targetFolder:(id)arg4 root:(id)arg5 atomically:(_Bool)arg6 sourceMaterializeOption:(unsigned long long)arg7 targetMaterializeOption:(unsigned long long)arg8 useDiskWriter:(_Bool)arg9;

@end
