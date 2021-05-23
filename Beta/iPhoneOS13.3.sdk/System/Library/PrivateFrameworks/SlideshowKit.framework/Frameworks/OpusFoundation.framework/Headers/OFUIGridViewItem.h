/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

#import <NSObject.h>

@class NSString;

@interface OFUIGridViewItem : NSObject

{
    id _object;
    _Bool _highlighted;
    _Bool _selected;
}

@property (retain, nonatomic) id object;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (nonatomic, getter=isSelected) _Bool selected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)objectForPasteboadItem:(id)arg1;
+ (id)itemWithPasteboardItem:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)pasteboardItem;

@end
