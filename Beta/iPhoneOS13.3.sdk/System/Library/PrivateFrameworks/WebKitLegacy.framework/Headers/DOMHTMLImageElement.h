/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMHTMLElement.h>

@class NSString, NSURL;

@interface DOMHTMLImageElement : DOMHTMLElement

@property (copy) NSString *name;
@property (copy) NSString *align;
@property (copy) NSString *alt;
@property (copy) NSString *border;
@property int height;
@property int hspace;
@property _Bool isMap;
@property (copy) NSString *longDesc;
@property (copy) NSString *src;
@property (copy) NSString *useMap;
@property int vspace;
@property int width;
@property (readonly) _Bool complete;
@property (copy) NSString *lowsrc;
@property (readonly) int naturalHeight;
@property (readonly) int naturalWidth;
@property (readonly) int x;
@property (readonly) int y;
@property (copy, readonly) NSString *altDisplayString;
@property (copy, readonly) NSURL *absoluteImageURL;

- (id)mimeType;
- (id)sizes;
- (void)setSizes:(id)arg1;
- (id)dataRepresentation:(_Bool)arg1;
- (id)crossOrigin;
- (void)setCrossOrigin:(id)arg1;
- (id)srcset;
- (void)setSrcset:(id)arg1;
- (id)currentSrc;

@end
