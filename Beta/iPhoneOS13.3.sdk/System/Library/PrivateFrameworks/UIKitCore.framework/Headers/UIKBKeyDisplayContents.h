/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface UIKBKeyDisplayContents : NSObject

{
    _Bool _fillPath;
    _Bool _force1xImages;
    _Bool _stringKeycapOverImage;
    _Bool _flipImageHorizontally;
    NSString *_displayString;
    NSString *_displayStringImage;
    NSArray *_secondaryDisplayStrings;
    NSArray *_secondaryDisplayStringImages;
    NSArray *_variantDisplayContents;
    NSArray *_highlightedVariantsList;
    long long _displayPathType;
    UIKBKeyDisplayContents *_fallbackContents;
}

@property (retain, nonatomic) NSString *displayString;
@property (retain, nonatomic) NSString *displayStringImage;
@property (retain, nonatomic) NSArray *secondaryDisplayStrings;
@property (retain, nonatomic) NSArray *secondaryDisplayStringImages;
@property (retain, nonatomic) NSArray *variantDisplayContents;
@property (retain, nonatomic) NSArray *highlightedVariantsList;
@property (nonatomic) long long displayPathType;
@property (nonatomic) _Bool fillPath;
@property (nonatomic) _Bool force1xImages;
@property (nonatomic) _Bool stringKeycapOverImage;
@property (nonatomic) _Bool flipImageHorizontally;
@property (retain, nonatomic) UIKBKeyDisplayContents *fallbackContents;

+ (id)displayContents;

- (void)dealloc;
- (id)description;

@end
