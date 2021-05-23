/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSError, NSString;

@interface PLFileSystemCapabilities : NSObject

{
    unsigned int _interfacesCapabilities;
    unsigned int _nativeCommonAttributes;
    char _fstypename[16];
    _Bool _isReadOnly;
    _Bool _isLocalVolume;
    _Bool _isInternalVolume;
    _Bool _isRootFileSystemVolume;
    _Bool _isValid;
    NSError *_error;
}

@property (readonly) _Bool isReadOnly;
@property (readonly) _Bool isCloneCapable;
@property (readonly) _Bool isWholeFileLockCapable;
@property (readonly) _Bool isGenCountCapable;
@property (readonly) _Bool isSecludeRenameCapable;
@property (readonly) _Bool isLocalVolume;
@property (readonly) _Bool isInternalVolume;
@property (readonly) _Bool isRootFileSystemVolume;
@property (readonly) NSString *fileSystemTypeName;
@property (readonly) _Bool isNetworkVolume;
@property (readonly) _Bool isCentralizedCacheDeleteCapable;
@property (readonly, getter=isWholeFileLockCapable) _Bool isCoreDataCapable;
@property (readonly, getter=isGenCountCapable) _Bool isCloudPhotoLibraryCapable;
@property (readonly) _Bool isValid;
@property (readonly) NSError *error;

+ (id)capabilitiesWithURL:(id)arg1;

- (id)description;
- (_Bool)determineCapabilitiesWithURL:(id)arg1 error:(id *)arg2;

@end
