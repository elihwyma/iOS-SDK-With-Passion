/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REHTMLElement.h>

@class NSArray, NSDictionary, NSString;

@interface REHTMLTagElement : REHTMLElement

{
    NSString *_tag;
    NSString *_content;
    NSArray *_classes;
    NSDictionary *_attributes;
    NSString *_prefix;
    NSString *_suffix;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)attributes;
- (id)classes;
- (id)_contentString;
- (id)initWithTag:(id)arg1 content:(id)arg2;
- (id)_prefixContentString;
- (id)_suffixContentString;
- (id)elementByAddingClass:(id)arg1;
- (id)elementByAddingClasses:(id)arg1;
- (id)elementBySettingClasses:(id)arg1;
- (id)elementBySettingAtttibutes:(id)arg1;

@end
