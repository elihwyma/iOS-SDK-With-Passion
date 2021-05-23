/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIMenuElement.h>

@class NSArray, NSString;

@interface UIMenu : UIMenuElement

{
    NSString *_identifier;
    unsigned long long _options;
    NSArray *_children;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) NSArray *children;

+ (_Bool)supportsSecureCoding;
+ (id)menuWithTitle:(id)arg1 children:(id)arg2;
+ (id)menuWithTitle:(id)arg1 image:(id)arg2 identifier:(id)arg3 options:(unsigned long long)arg4 children:(id)arg5;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 image:(id)arg2 identifier:(id)arg3 options:(unsigned long long)arg4 children:(id)arg5;
- (id)_immutableCopy;
- (id)_copyWithOverrideChildren:(id)arg1;
- (id)menuByReplacingChildren:(id)arg1;
- (void)_acceptMenuVisit:(CDUnknownBlockType)arg1 commandVisit:(CDUnknownBlockType)arg2 actionVisit:(CDUnknownBlockType)arg3;
- (_Bool)_acceptBoolMenuVisit:(CDUnknownBlockType)arg1 commandVisit:(CDUnknownBlockType)arg2 actionVisit:(CDUnknownBlockType)arg3;
- (void)_acceptMenuVisit:(CDUnknownBlockType)arg1 leafVisit:(CDUnknownBlockType)arg2;
- (_Bool)_acceptBoolMenuVisit:(CDUnknownBlockType)arg1 leafVisit:(CDUnknownBlockType)arg2;
- (id)_spiRepresentation;

@end
