/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OADCachedTextStyle : NSObject

{
    struct OADCachedTextStyleData mData;
    unsigned long long mHash;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithTextBodyProperties:(id)arg1 paragraphProperties:(id)arg2 characterProperties:(id)arg3 colorContext:(id)arg4 graphicStyleCache:(id)arg5;
- (void)applyToParagraphProperties:(id)arg1 graphicStyleCache:(id)arg2;
- (void)applyToTextBodyProperties:(id)arg1 graphicStyleCache:(id)arg2;

@end
