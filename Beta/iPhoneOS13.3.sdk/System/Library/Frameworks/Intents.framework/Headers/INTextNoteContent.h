/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INNoteContent.h>

#import <Intents/Swift-Protocol.h>

@class NSString;

@interface INTextNoteContent : INNoteContent <Swift>

{
    NSString *_text;
}

@property (copy, nonatomic, readonly) NSString *text;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)initWithText:(id)arg1;
- (id)_intents_readableDescriptionForLanguage:(id)arg1 withMetadata:(id)arg2;

@end
