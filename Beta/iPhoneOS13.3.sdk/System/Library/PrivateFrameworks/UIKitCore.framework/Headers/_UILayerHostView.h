/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIVisibilityPropagationView.h>

@class CALayerHost;

@interface _UILayerHostView : _UIVisibilityPropagationView

{
    int _pid;
    unsigned int _contextID;
}

@property (nonatomic) unsigned int contextID;
@property (nonatomic) _Bool inheritsSecurity;
@property (retain, nonatomic, readonly) CALayerHost *layerHost;

+ (Class)layerClass;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 pid:(int)arg2 contextID:(unsigned int)arg3;
- (void)setPid:(int)arg1 contextID:(unsigned int)arg2;

@end
