/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SKUITextLayout : NSObject

{
    struct __CTFramesetter *_framesetter;
    double _lineHeight;
    _Bool _requiresTruncation;
    struct CGSize _size;
    struct __CTFrame *_textFrame;
    struct CGSize _truncatedSize;
}

@property (nonatomic, readonly) double lineHeight;
@property (nonatomic, readonly) _Bool requiresTruncation;
@property (nonatomic, readonly) struct __CTFrame *textFrame;
@property (nonatomic, readonly) struct CGSize textSize;
@property (nonatomic, readonly) struct CGSize truncatedSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (struct __CFAttributedString *)_newAttributedStringWithRequest:(id)arg1;
+ (struct __CFAttributedString *)newAttributedStringWithText:(id)arg1;

- (void)dealloc;
- (id)initWithLayoutRequest:(id)arg1;

@end
