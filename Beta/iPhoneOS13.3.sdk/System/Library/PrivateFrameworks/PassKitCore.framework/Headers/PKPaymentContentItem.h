/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSAttributedString, NSURLRequest;

@interface PKPaymentContentItem : NSObject <Swift>

{
    NSURLRequest *_imageRequest;
    struct CGImage *_image;
    NSAttributedString *_title;
    NSAttributedString *_label;
}

@property (copy, nonatomic) NSURLRequest *imageRequest;
@property (nonatomic) struct CGImage *image;
@property (copy, nonatomic) NSAttributedString *title;
@property (copy, nonatomic) NSAttributedString *label;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToPaymentContentItem:(id)arg1;

@end
