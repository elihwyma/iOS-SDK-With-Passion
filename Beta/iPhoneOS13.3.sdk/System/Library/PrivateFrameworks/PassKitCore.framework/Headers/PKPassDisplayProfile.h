/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKDisplayProfile.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSData, PKColor;

@interface PKPassDisplayProfile : PKDisplayProfile <Swift>

{
    _Bool _tallCode;
    _Bool _hasBackgroundImage;
    _Bool _hasStripImage;
    long long _passStyle;
    PKColor *_backgroundColor;
    PKColor *_secondaryBackgroundColor;
    PKColor *_foregroundColor;
    PKColor *_labelColor;
    PKColor *_stripColor;
    NSData *_manifestHash;
}

@property (nonatomic) long long passStyle;
@property (retain, nonatomic) PKColor *backgroundColor;
@property (retain, nonatomic) PKColor *secondaryBackgroundColor;
@property (retain, nonatomic) PKColor *foregroundColor;
@property (retain, nonatomic) PKColor *labelColor;
@property (retain, nonatomic) PKColor *stripColor;
@property (retain, nonatomic) NSData *manifestHash;
@property (nonatomic) _Bool tallCode;
@property (nonatomic) _Bool hasBackgroundImage;
@property (nonatomic) _Bool hasStripImage;
@property (nonatomic, readonly) _Bool showsBackgroundImage;
@property (nonatomic, readonly) _Bool showsStripImage;
@property (nonatomic, readonly) long long layoutMode;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)type;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;

@end
