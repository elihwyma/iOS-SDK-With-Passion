/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSAttributedString, NSString, NSUUID;

@interface UIAccessibilityCustomRotor : NSObject

{
    NSUUID *uuid;
    id targetElement;
    long long systemRotorType;
    NSAttributedString *_attributedName;
    CDUnknownBlockType _itemSearchBlock;
}

@property (retain, nonatomic) NSUUID *uuid;
@property (weak, nonatomic) id targetElement;
@property (nonatomic) long long systemRotorType;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSAttributedString *attributedName;
@property (copy, nonatomic) CDUnknownBlockType itemSearchBlock;

- (id)initWithName:(id)arg1 itemSearchBlock:(CDUnknownBlockType)arg2;
- (id)initWithAttributedName:(id)arg1 itemSearchBlock:(CDUnknownBlockType)arg2;
- (id)initWithSystemType:(long long)arg1 itemSearchBlock:(CDUnknownBlockType)arg2;

@end
