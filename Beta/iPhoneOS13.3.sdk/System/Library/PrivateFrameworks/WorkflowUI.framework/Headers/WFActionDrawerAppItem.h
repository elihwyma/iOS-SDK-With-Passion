/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface WFActionDrawerAppItem : NSObject

{
    NSString *_name;
    UIImage *_icon;
    NSString *_bundleIdentifier;
}

@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) UIImage *icon;
@property (copy, nonatomic, readonly) NSString *bundleIdentifier;

- (long long)compare:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithName:(id)arg1 icon:(id)arg2 bundleIdentifier:(id)arg3;

@end
