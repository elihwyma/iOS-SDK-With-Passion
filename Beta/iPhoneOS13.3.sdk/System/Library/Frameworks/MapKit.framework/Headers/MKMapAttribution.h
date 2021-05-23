/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSAttributedString, NSString, NSURL, UIImage;

@interface MKMapAttribution : NSObject

{
    NSAttributedString *_string;
    NSURL *_url;
    UIImage *_providerImage;
    NSString *_providerString;
    NSString *_providerName;
}

@property (nonatomic, readonly) NSString *providerString;
@property (nonatomic, readonly) UIImage *providerImage;
@property (nonatomic, readonly) NSString *providerName;
@property (nonatomic, readonly) NSAttributedString *string;
@property (nonatomic, readonly) NSURL *url;

+ (id)attributionUrlFromRegionalAttributions:(id)arg1;

- (id)initWithStringAttributes:(id)arg1 regionalAttributions:(id)arg2 underlineText:(_Bool)arg3 applyLinkAttribution:(_Bool)arg4 scale:(double)arg5;
- (id)attributedStringWithImage:(id)arg1;
- (id)disclosureArrow;

@end
