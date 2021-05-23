/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TIKeyboardLayoutState : NSObject

{
    _Bool _hasCandidateKey;
    _Bool _hasAccentKey;
    _Bool _canMultitap;
    _Bool _isAlphabeticPlane;
    _Bool _isKanaPlane;
    _Bool _diacriticForwardCompose;
    _Bool _interfaceIdiomIsPad;
    NSString *_inputMode;
    NSString *_layoutTag;
    long long _userInterfaceIdiom;
}

@property (copy, nonatomic) NSString *inputMode;
@property (nonatomic, readonly) NSString *softwareLayout;
@property (nonatomic) _Bool hasCandidateKey;
@property (nonatomic) _Bool hasAccentKey;
@property (nonatomic) _Bool canMultitap;
@property (nonatomic) _Bool isAlphabeticPlane;
@property (nonatomic) _Bool isKanaPlane;
@property (nonatomic) _Bool diacriticForwardCompose;
@property (copy, nonatomic) NSString *layoutTag;
@property (nonatomic) long long userInterfaceIdiom;
@property (nonatomic) _Bool interfaceIdiomIsPad;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setInterfaceIdiomIsPad;

@end
