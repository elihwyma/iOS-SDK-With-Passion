/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RETextContentProvider.h>

@class NSAttributedString;

@interface REAttributedTextContentProvider : RETextContentProvider

{
    NSAttributedString *_text;
}

@property (nonatomic, readonly) NSAttributedString *text;

+ (id)textContentProviderWithAttributedText:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAttributedText:(id)arg1;
- (id)contentEncodedString;
- (id)attributedStringRepresentation;
- (id)clockKitTextProviderRepresentation;

@end
