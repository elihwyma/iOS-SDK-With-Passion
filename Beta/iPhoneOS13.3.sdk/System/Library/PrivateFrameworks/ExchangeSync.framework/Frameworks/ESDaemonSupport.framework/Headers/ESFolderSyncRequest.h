/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/ESDaemonSupport.framework/ESDaemonSupport
 */

#import <Foundation/NSObject.h>

@class DAFolder, NSArray;

@interface ESFolderSyncRequest : NSObject

{
    _Bool _hasRemoteChanges;
    _Bool _isInitialUberSync;
    _Bool _isResyncAfterConnectionFailed;
    _Bool _isResyncAfterServerError;
    _Bool _containsPostponedActions;
    DAFolder *_folder;
    NSArray *_actions;
}

@property (retain, nonatomic) DAFolder *folder;
@property (nonatomic) _Bool hasRemoteChanges;
@property (nonatomic) _Bool isInitialUberSync;
@property (retain, nonatomic) NSArray *actions;
@property (nonatomic) _Bool isResyncAfterConnectionFailed;
@property (nonatomic) _Bool isResyncAfterServerError;
@property (nonatomic) _Bool containsPostponedActions;

- (id)description;
- (id)initWithFolder:(id)arg1 hasRemoteChanges:(_Bool)arg2 isInitialUberSync:(_Bool)arg3;

@end
