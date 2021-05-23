/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface WFActionDrawerSection : NSObject

{
    _Bool _loading;
    NSString *_localizedTitle;
    NSArray *_actions;
    NSArray *_donations;
    NSString *_bundleIdentifier;
    long long _sectionType;
}

@property (copy, nonatomic, readonly) NSString *localizedTitle;
@property (copy, nonatomic) NSArray *actions;
@property (copy, nonatomic) NSArray *donations;
@property (copy, nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly, getter=isLoading) _Bool loading;
@property (nonatomic, readonly) long long sectionType;

- (id)initWithLocalizedTitle:(id)arg1 actions:(id)arg2 bundleIdentifier:(id)arg3 sectionType:(long long)arg4;
- (id)initWithLocalizedTitle:(id)arg1 donations:(id)arg2 bundleIdentifier:(id)arg3 sectionType:(long long)arg4 actions:(id)arg5;
- (id)initAsLoading;

@end
