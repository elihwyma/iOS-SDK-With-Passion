/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@class NSAttributedString, NSMutableAttributedString, NSString;

@interface TMLAttributedString : NSObject

{
    NSMutableAttributedString *_attributedString;
}

@property (retain, nonatomic) NSString *string;
@property (copy, nonatomic) NSAttributedString *attributedString;

+ (void)initializeJSContext:(id)arg1;
+ (id)attributedStringWithFormat:(id)arg1 attributes:(id)arg2;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (void)addAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange)arg3;
- (void)removeAttribute:(id)arg1 range:(struct _NSRange)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withAttributedString:(id)arg2;
- (void)deleteCharactersInRange:(struct _NSRange)arg1;
- (void)insertAttributedString:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)appendAttributedString:(id)arg1;
- (struct CGSize)size;
- (id)initWithAttributedString:(id)arg1;
- (id)attributedStringWithAttachment:(id)arg1;
- (id)NSAttributedString;
- (id)enumerateAttribute:(id)arg1 inRange:(struct _NSRange)arg2 options:(unsigned long long)arg3;

@end
