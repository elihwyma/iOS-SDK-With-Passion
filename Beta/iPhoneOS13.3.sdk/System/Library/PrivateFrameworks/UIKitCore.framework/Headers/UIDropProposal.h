/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@interface UIDropProposal : NSObject <Swift>

{
    _Bool _precise;
    _Bool _prefersFullSizePreview;
    unsigned long long _operation;
    long long _preferredBadgeStyle;
}

@property (nonatomic) unsigned long long operation;
@property (nonatomic, getter=_preferredBadgeStyle, setter=_setPreferredBadgeStyle:) long long preferredBadgeStyle;
@property (nonatomic, getter=isPrecise) _Bool precise;
@property (nonatomic) _Bool prefersFullSizePreview;

+ (id)new;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDropOperation:(unsigned long long)arg1;

@end
