/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSUUID, _DKDataProtectionMaster;

@interface _DKDataProtectionStateMonitor : NSObject

{
    _DKDataProtectionMaster *_master;
    NSUUID *_handlerUUID;
    CDUnknownBlockType _changeHandler;
}

@property (copy) CDUnknownBlockType changeHandler;

- (id)init;
- (void)dealloc;
- (_Bool)isDataAvailableFor:(id)arg1;

@end
