/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface BRCVolume : NSObject

{
    struct statfs _stfs;
    _Bool _isCaseSensitive;
    _Bool _isIgnoringOwnership;
    _Bool _hasRenameExcl;
    _Bool _hasRenameSwap;
    _Bool _hasCloning;
    int _deviceID;
}

@property (nonatomic, readonly) int deviceID;
@property (nonatomic, readonly) _Bool isCaseSensitive;
@property (nonatomic, readonly) _Bool isIgnoringOwnership;
@property (nonatomic, readonly) _Bool hasRenameSwap;
@property (nonatomic, readonly) _Bool hasRenameExcl;
@property (nonatomic, readonly) _Bool hasCloning;
@property (nonatomic, readonly) NSString *mountPath;
@property (nonatomic, readonly) NSString *fsTypeName;
@property (nonatomic, readonly) NSNumber *freeSize;
@property (nonatomic, readonly) NSNumber *totalSize;

- (id)description;
- (_Bool)setUpForRelPath:(id)arg1 session:(id)arg2 error:(id *)arg3;

@end
