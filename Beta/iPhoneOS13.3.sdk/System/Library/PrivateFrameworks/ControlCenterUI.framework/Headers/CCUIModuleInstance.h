/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

#import <Foundation/NSObject.h>

#import <ControlCenterUI/Swift-Protocol.h>

@class CCSModuleMetadata;

@protocol CCUIContentModule;

@interface CCUIModuleInstance : NSObject <Swift>

{
    CCSModuleMetadata *_metadata;
    id <CCUIContentModule> _module;
    struct CCUILayoutSize _prototypeModuleSize;
}

@property (nonatomic, readonly) CCSModuleMetadata *metadata;
@property (nonatomic, readonly) id <CCUIContentModule> module;
@property (nonatomic, readonly) struct CCUILayoutSize prototypeModuleSize;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMetadata:(id)arg1 module:(id)arg2 prototypeModuleSize:(struct CCUILayoutSize)arg3;

@end
