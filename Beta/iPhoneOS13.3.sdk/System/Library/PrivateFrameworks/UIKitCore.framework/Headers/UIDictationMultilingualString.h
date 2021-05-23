/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface UIDictationMultilingualString : NSObject

{
    NSString *_text;
    NSString *_dominantLanguage;
    id _correctionIdentifier;
    NSArray *_phrases;
}

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *dominantLanguage;
@property (retain, nonatomic) id correctionIdentifier;
@property (copy, nonatomic) NSArray *phrases;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryValue;
- (id)initWithText:(id)arg1 forLanguage:(id)arg2;

@end
