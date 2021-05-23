/*
 Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
 */

#import <UIKitCore/UIView.h>

@class NSUUID;

@interface DOCRemoteBarButtonTrackingView : UIView

{
    NSUUID *_uuid;
}

@property (readonly) NSUUID *uuid;

- (id)initWithUUID:(id)arg1;

@end
