/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, UIWebDocumentView;

@protocol WebDocumentView;

__attribute__((visibility("hidden")))
@interface UIWebPaginationInfo : NSObject

{
    NSObject<WebDocumentView> *_documentView;
    double _scaleFactor;
    struct CGSize _layoutSize;
    NSArray *_pageRects;
    UIWebDocumentView *_webDocumentView;
}

@property (nonatomic, readonly) unsigned long long pageCount;
@property (nonatomic, readonly) double lastPageHeight;
@property (retain, nonatomic) UIWebDocumentView *webDocumentView;

- (void)dealloc;
- (double)scaleFactor;
- (struct CGSize)layoutSize;
- (id)documentView;
- (struct CGSize)sizeForPageAtIndex:(long long)arg1;
- (id)pageRects;
- (id)initWithDocumentView:(id)arg1 scaleFactor:(double)arg2 layoutSize:(struct CGSize)arg3 pageRects:(id)arg4;

@end
