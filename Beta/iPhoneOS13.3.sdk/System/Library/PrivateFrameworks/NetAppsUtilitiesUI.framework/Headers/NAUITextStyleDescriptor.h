/*
 Image: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NAUITextStyleDescriptor : NSObject

{
    _Bool _allowsAccessibilitySizes;
    _Bool _allowsSmallSizes;
    unsigned int _symbolicTraits;
    NSString *_textStyle;
}

@property (copy, nonatomic, readonly) NSString *textStyle;
@property (nonatomic, readonly) unsigned int symbolicTraits;
@property (nonatomic, readonly) _Bool allowsAccessibilitySizes;
@property (nonatomic, readonly) _Bool allowsSmallSizes;

+ (id)na_identity;
+ (id)descriptorWithTextStyle:(id)arg1;
+ (id)fontWithTextStyleDescriptor:(id)arg1;
+ (id)defaultFontForTextStyleDescriptor:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTextStyle:(id)arg1 symbolicTraits:(unsigned int)arg2 allowsAccessibilitySizes:(_Bool)arg3 allowsSmallSizes:(_Bool)arg4;
- (id)descriptorByAddingSymbolicTraits:(unsigned int)arg1 removingSymbolicTraits:(unsigned int)arg2;
- (id)descriptorByDisallowingAccessibilitySizes;
- (id)descriptorByDisallowingSmallSizes;

@end
