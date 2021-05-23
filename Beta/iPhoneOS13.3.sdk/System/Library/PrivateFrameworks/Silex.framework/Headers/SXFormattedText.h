/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXJSONObject.h>

@class NSString, SXJSONArray;

@interface SXFormattedText : SXJSONObject

{
    _Bool shouldWrapText;
}

@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) NSString *textStyle;
@property (nonatomic, readonly) SXJSONArray *inlineTextStyles;
@property (nonatomic, readonly) SXJSONArray *additions;
@property (nonatomic) _Bool shouldWrapText;

+ (CDUnknownBlockType)valueClassBlockForPropertyWithName:(id)arg1;

- (id)description;
- (id)initWithText:(id)arg1;
- (id)textWithValue:(id)arg1 withType:(int)arg2;

@end
