/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSString.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface __NSVariableWidthString : NSString

{
    NSDictionary *_variants;
    NSString *_defaultString;
}

@property (readonly) unsigned long long length;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (id)formatConfiguration;
- (id)initWithWidthContexts:(id)arg1;
- (id)initWithString:(id)arg1 widthVariants:(id)arg2;
- (id)initWithWidthVariants:(id)arg1;
- (id)variantFittingPresentationWidth:(long long)arg1;

@end
