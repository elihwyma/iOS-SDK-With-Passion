/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIKBDerivedKeyboard : NSObject

{
    _Bool _addsSupplementaryControlKeys;
    NSString *_derivedKBStarPrefixName;
    struct CGSize _keyboardSize;
}

@property (nonatomic) struct CGSize keyboardSize;
@property (copy, nonatomic) NSString *derivedKBStarPrefixName;
@property (nonatomic) _Bool addsSupplementaryControlKeys;

@end
