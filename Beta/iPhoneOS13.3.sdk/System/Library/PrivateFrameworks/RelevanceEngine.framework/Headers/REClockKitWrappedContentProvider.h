/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RETextContentProvider.h>

@class CLKTextProvider;

@interface REClockKitWrappedContentProvider : RETextContentProvider

{
    CLKTextProvider *_clockKitTextProvider;
}

@property (nonatomic, readonly) CLKTextProvider *clockKitTextProvider;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)attributedStringRepresentation;
- (id)clockKitTextProviderRepresentation;
- (id)initWithClockKitTextProvider:(id)arg1;

@end
