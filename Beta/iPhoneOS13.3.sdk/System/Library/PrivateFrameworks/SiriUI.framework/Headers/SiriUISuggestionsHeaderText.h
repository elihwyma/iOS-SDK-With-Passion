/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <NSObject.h>

#import <SiriUI/Swift-Protocol.h>

@class NSAttributedString, NSString;

@interface SiriUISuggestionsHeaderText : NSObject <Swift>

{
    NSString *_regularString;
    NSString *_compactString;
    long long _textAlignment;
}

@property (copy, nonatomic) NSString *regularString;
@property (copy, nonatomic) NSString *compactString;
@property (nonatomic) long long textAlignment;
@property (nonatomic, readonly) NSAttributedString *attributedStringForMainScreenTraitCollection;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_attributedStringWithString:(id)arg1;
- (id)initWithRegularString:(id)arg1 compactString:(id)arg2;

@end
