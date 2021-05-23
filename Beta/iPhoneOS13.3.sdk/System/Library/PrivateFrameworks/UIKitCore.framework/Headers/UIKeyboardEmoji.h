/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface UIKeyboardEmoji : NSObject

{
    NSString *_emojiString;
    unsigned long long _variantMask;
}

@property (retain, nonatomic) NSString *emojiString;
@property unsigned long long variantMask;

+ (id)emojiWithString:(id)arg1 withVariantMask:(unsigned long long)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)key;
- (id)initWithString:(id)arg1 withVariantMask:(unsigned long long)arg2;

@end
