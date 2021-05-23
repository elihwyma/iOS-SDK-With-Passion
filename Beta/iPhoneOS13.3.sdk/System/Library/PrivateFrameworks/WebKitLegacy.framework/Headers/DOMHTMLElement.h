/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMElement.h>

@class DOMHTMLCollection, NSString;

@interface DOMHTMLElement : DOMElement

@property (copy) NSString *title;
@property (copy) NSString *lang;
@property (copy) NSString *dir;
@property int tabIndex;
@property (copy) NSString *accessKey;
@property (copy) NSString *innerText;
@property (copy) NSString *outerText;
@property (copy) NSString *contentEditable;
@property (readonly) _Bool isContentEditable;
@property (copy) NSString *idName;
@property (readonly) DOMHTMLCollection *children;
@property (copy, readonly) NSString *titleDisplayString;

- (void)setHidden:(_Bool)arg1;
- (_Bool)hidden;
- (int)scrollXOffset;
- (int)scrollYOffset;
- (void)setScrollXOffset:(int)arg1 scrollYOffset:(int)arg2;
- (_Bool)autocorrect;
- (int)structuralComplexityContribution;
- (void)setScrollXOffset:(int)arg1 scrollYOffset:(int)arg2 adjustForIOSCaret:(_Bool)arg3;
- (void)absolutePosition:(int *)arg1:(int *)arg2:(int *)arg3:(int *)arg4;
- (void)click;
- (_Bool)translate;
- (void)setTranslate:(_Bool)arg1;
- (_Bool)draggable;
- (void)setDraggable:(_Bool)arg1;
- (id)webkitdropzone;
- (void)setWebkitdropzone:(id)arg1;
- (_Bool)spellcheck;
- (void)setSpellcheck:(_Bool)arg1;
- (id)insertAdjacentElement:(id)arg1 element:(id)arg2;
- (void)insertAdjacentHTML:(id)arg1 html:(id)arg2;
- (void)insertAdjacentText:(id)arg1 text:(id)arg2;
- (void)setAutocorrect:(_Bool)arg1;
- (id)autocapitalize;
- (void)setAutocapitalize:(id)arg1;

@end
