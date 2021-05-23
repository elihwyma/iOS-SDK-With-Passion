/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface UIDictationMultilingualResults : NSObject

{
    NSArray *_phrases;
    NSString *_dominantLanguage;
}

@property (copy, nonatomic) NSArray *phrases;
@property (copy, nonatomic) NSString *dominantLanguage;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPhrases:(id)arg1 dominantLanguage:(id)arg2;

@end
