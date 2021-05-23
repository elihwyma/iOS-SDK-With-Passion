/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <Foundation/NSObject.h>

@protocol NSTextLocation;

@interface NSTextRange : NSObject

{
    id <NSTextLocation> _location;
    id <NSTextLocation> _terminator;
}

@property (readonly, getter=isEmpty) _Bool empty;
@property (readonly) id <NSTextLocation> location;
@property (readonly) id <NSTextLocation> terminator;

- (void)dealloc;
- (id)textRangeByFormingUnionWithTextRange:(id)arg1;
- (_Bool)intersectsWithTextRange:(id)arg1;
- (_Bool)containsLocation:(id)arg1;
- (id)initWithLocation:(id)arg1 terminator:(id)arg2;
- (id)initWithLocation:(id)arg1;
- (_Bool)isEqualToTextRange:(id)arg1;
- (id)textRangeByIntersectingWithTextRange:(id)arg1;
- (id)initWithStartLocation:(id)arg1 endLocation:(id)arg2;
- (id)startLocation;
- (id)endLocation;

@end
