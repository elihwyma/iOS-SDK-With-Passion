/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, REHTMLElement;

@interface REHTMLPageBuilder : NSObject

{
    REHTMLElement *_stylesheetsElement;
    REHTMLElement *_scriptsElement;
    REHTMLElement *_pageDescriptionElement;
    REHTMLElement *_navigationLinksElement;
    NSArray *_stylesheets;
    NSArray *_loadingScripts;
    NSString *_pageDescription;
    NSArray *_links;
}

@property (retain, nonatomic) NSArray *stylesheets;
@property (retain, nonatomic) NSArray *loadingScripts;
@property (retain, nonatomic) NSString *pageDescription;
@property (retain, nonatomic) NSArray *links;

+ (id)_safariIcon;
+ (id)_headElement;
+ (id)_viewportElement;
+ (id)_iosIcon;
+ (id)_smallFavicon;
+ (id)_largeFavicon;
+ (id)_stylesheetElementWithLocation:(id)arg1;
+ (id)_scriptElementWithLocation:(id)arg1;
+ (id)_htmlElement;
+ (id)_bodyElement;
+ (id)_mainNavigationElement;
+ (id)_docTypeElement;

- (id)init;
- (id)pageWithTitle:(id)arg1 content:(id)arg2 backLocation:(id)arg3;

@end
