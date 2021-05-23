/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIMenu.h>

@class NSString;

@interface UICommandGroup : UIMenu

{
    NSString *_discoverabilityTitle;
}

@property (nonatomic, readonly) NSString *discoverabilityTitle;

+ (_Bool)supportsSecureCoding;
+ (id)groupWithTitle:(id)arg1 discoverabilityTitle:(id)arg2 identifier:(id)arg3 options:(unsigned long long)arg4 children:(id)arg5;
+ (id)newGroupWithTitle:(id)arg1 discoverabilityTitle:(id)arg2 identifier:(id)arg3 options:(unsigned long long)arg4 children:(id)arg5;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithTitle:(id)arg1 discoverabilityTitle:(id)arg2 identifier:(id)arg3 options:(unsigned long long)arg4 children:(id)arg5;
- (id)groupByReplacingChildren:(id)arg1;

@end
