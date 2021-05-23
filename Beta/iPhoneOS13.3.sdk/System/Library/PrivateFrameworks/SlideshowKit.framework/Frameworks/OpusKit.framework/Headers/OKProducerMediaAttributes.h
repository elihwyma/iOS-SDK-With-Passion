/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <Foundation/NSObject.h>

@class NSAttributedString, NSString;

@interface OKProducerMediaAttributes : NSObject

{
    double _duration;
    double _scale;
    double _scale2;
    NSString *_text;
    NSAttributedString *_attributedText;
    struct CGPoint _offset;
    struct CGPoint _offset2;
}

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) double duration;
@property (nonatomic) struct CGPoint offset;
@property (nonatomic) double scale;
@property (nonatomic) struct CGPoint offset2;
@property (nonatomic) double scale2;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)hasText;
- (void)clearText;
- (void)updateWithText:(id)arg1;

@end
