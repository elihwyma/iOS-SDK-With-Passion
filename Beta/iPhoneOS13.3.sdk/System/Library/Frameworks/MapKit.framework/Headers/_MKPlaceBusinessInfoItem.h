/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSAttributedString, NSString, UIColor, UIFont;

__attribute__((visibility("hidden")))
@interface _MKPlaceBusinessInfoItem : NSObject

{
    NSString *_displayString;
    _Bool _isAvailable;
    NSAttributedString *_formattedDisplayString;
    UIFont *_font;
    UIColor *_textColor;
}

@property (nonatomic, readonly) NSAttributedString *displayString;

+ (id)itemWithDescription:(id)arg1 availability:(_Bool)arg2;

- (_Bool)isEqual:(id)arg1;
- (void)setFont:(id)arg1 textColor:(id)arg2;

@end
