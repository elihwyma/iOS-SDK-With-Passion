/*
 Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
 */

#import <UIKitCore/UIBarButtonItem.h>

@class NSUUID;

@interface DOCRemoteUIBarButtonItem : UIBarButtonItem

{
    NSUUID *_uuid;
}

@property (retain) NSUUID *uuid;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
