/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RETextContentProvider.h>

@class NSString;

@interface RESimpleTextContentProvider : RETextContentProvider

{
    NSString *_text;
}

@property (nonatomic, readonly) NSString *text;

+ (id)textContentProviderWithText:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithText:(id)arg1;
- (id)contentEncodedString;
- (id)attributedStringRepresentation;
- (id)clockKitTextProviderRepresentation;

@end
