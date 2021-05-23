/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <UIFoundation/NSTextRange.h>

@class NSCountableTextLocation, NSString;

@interface NSCountableTextRange : NSTextRange

{
    struct _NSRange _range;
}

@property (readonly) struct _NSRange range;
@property (readonly) NSCountableTextLocation *location;
@property (readonly) NSCountableTextLocation *terminator;
@property (copy, readonly) NSString *type;

+ (id)documentRange;
+ (_Bool)isBaseClassTestingMode;
+ (void)setBaseClassTestingMode:(_Bool)arg1;

- (id)description;
- (_Bool)isEmpty;
- (id)initWithRange:(struct _NSRange)arg1;
- (id)textRangeByFormingUnionWithTextRange:(id)arg1;
- (_Bool)intersectsWithTextRange:(id)arg1;
- (_Bool)containsLocation:(id)arg1;
- (id)initWithLocation:(id)arg1 terminator:(id)arg2;
- (_Bool)isEqualToTextRange:(id)arg1;
- (id)textRangeByIntersectingWithTextRange:(id)arg1;

@end
