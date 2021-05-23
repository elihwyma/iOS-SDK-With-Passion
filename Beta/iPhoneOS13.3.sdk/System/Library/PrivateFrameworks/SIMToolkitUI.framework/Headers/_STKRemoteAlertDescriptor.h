/*
 Image: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
 */

#import <Foundation/NSObject.h>

@class BSAction, NSString, STKSessionAction;

@interface _STKRemoteAlertDescriptor : NSObject

{
    NSString *_serviceIdentifier;
    NSString *_viewControllerName;
    STKSessionAction *_action;
    BSAction *_BSAction;
}

@property (copy, nonatomic, readonly) NSString *serviceIdentifier;
@property (copy, nonatomic, readonly) NSString *viewControllerName;
@property (nonatomic, readonly) STKSessionAction *action;
@property (nonatomic, readonly) BSAction *BSAction;
@property (nonatomic, readonly, getter=isValid) _Bool valid;

- (id)description;
- (id)debugDescription;
- (id)initWithAction:(id)arg1 viewControllerName:(id)arg2;

@end
