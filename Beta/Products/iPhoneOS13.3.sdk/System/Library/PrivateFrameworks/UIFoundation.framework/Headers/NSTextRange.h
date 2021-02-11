/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSTextRange : NSObject {
    <NSTextLocation> * _location;
    <NSTextLocation> * _terminator;
}

@property (getter=isEmpty, readonly) bool empty;
@property (readonly) <NSTextLocation> *location;
@property (readonly) <NSTextLocation> *terminator;

- (bool)containsLocation:(id)arg1;
- (void)dealloc;
- (id)endLocation;
- (id)initWithLocation:(id)arg1;
- (id)initWithLocation:(id)arg1 terminator:(id)arg2;
- (id)initWithStartLocation:(id)arg1 endLocation:(id)arg2;
- (bool)intersectsWithTextRange:(id)arg1;
- (bool)isEmpty;
- (bool)isEqualToTextRange:(id)arg1;
- (id)location;
- (id)startLocation;
- (id)terminator;
- (id)textRangeByFormingUnionWithTextRange:(id)arg1;
- (id)textRangeByIntersectingWithTextRange:(id)arg1;

@end