/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <Foundation/NSObject.h>

@class NSArray, UIFont;

@interface AKFontListController : NSObject

{
    NSArray *_fonts;
    UIFont *_defaultFont;
}

@property (retain) NSArray *fonts;
@property (retain) UIFont *defaultFont;

+ (id)attributedStringForFont:(id)arg1;

- (id)initWithController:(id)arg1;
- (id)_createFontsList;

@end
