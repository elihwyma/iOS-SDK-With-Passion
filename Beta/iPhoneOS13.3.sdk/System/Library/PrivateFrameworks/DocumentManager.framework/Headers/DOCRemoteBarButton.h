/*
 Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
 */

#import <Foundation/NSObject.h>

@class NSUUID, UIBarButtonItem;

@interface DOCRemoteBarButton : NSObject

{
    UIBarButtonItem *_barButton;
    NSUUID *_uuid;
}

@property (readonly) UIBarButtonItem *barButton;
@property (readonly) NSUUID *uuid;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBarButton:(id)arg1;

@end
