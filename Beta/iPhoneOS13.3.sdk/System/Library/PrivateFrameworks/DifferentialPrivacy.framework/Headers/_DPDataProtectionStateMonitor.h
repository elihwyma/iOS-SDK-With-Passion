/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <NSObject.h>

@class NSUUID, _DPDataProtectionMaster;

@interface _DPDataProtectionStateMonitor : NSObject

{
    CDUnknownBlockType _changeHandler;
    _DPDataProtectionMaster *_master;
    NSUUID *_handlerUUID;
}

@property (nonatomic, readonly) _DPDataProtectionMaster *master;
@property (readonly) NSUUID *handlerUUID;
@property (copy) CDUnknownBlockType changeHandler;

+ (id)dataProtectionClassA;
+ (id)dataProtectionClassC;
+ (id)dataProtectionClassD;

- (id)init;
- (void)dealloc;
- (_Bool)isDataAvailableFor:(id)arg1;

@end
