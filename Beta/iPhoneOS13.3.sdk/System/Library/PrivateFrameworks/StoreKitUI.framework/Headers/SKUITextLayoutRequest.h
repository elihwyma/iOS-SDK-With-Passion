/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSAttributedString, NSString;

@interface SKUITextLayoutRequest : NSObject

{
    NSAttributedString *_attributedText;
    double _fontSize;
    long long _fontWeight;
    long long _numberOfLines;
    NSString *_text;
    unsigned char _textAlignment;
    double _width;
}

@property (nonatomic) double fontSize;
@property (nonatomic) long long fontWeight;
@property (nonatomic) unsigned char textAlignment;
@property (nonatomic) long long numberOfLines;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) double width;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) Class layoutClass;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
