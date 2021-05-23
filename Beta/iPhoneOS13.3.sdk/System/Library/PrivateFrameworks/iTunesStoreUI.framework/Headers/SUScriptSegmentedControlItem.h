/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, SUScriptCanvasContext, UIImage;

@interface SUScriptSegmentedControlItem : SUScriptObject

{
    SUScriptCanvasContext *_canvas;
    NSString *_identifier;
    UIImage *_image;
    NSString *_imageURLString;
    NSString *_title;
    id _userInfo;
}

@property (nonatomic, readonly) UIImage *image;
@property (retain) SUScriptCanvasContext *canvas;
@property (retain) NSString *identifier;
@property (retain) NSString *imageURL;
@property (retain) NSString *title;
@property (retain) id userInfo;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;

- (void)dealloc;
- (id)_className;
- (id)_segmentedControl;
- (void)_setImage:(id)arg1;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (void)_reloadUserInterface;
- (id)newPageSection;
- (id)initWithPageSection:(id)arg1;

@end
