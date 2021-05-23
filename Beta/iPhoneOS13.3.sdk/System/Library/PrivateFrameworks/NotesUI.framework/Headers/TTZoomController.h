/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@interface TTZoomController : NSObject

{
    double _zoomFactor;
    double _checklistZoomFactor;
}

@property (nonatomic) double zoomFactor;
@property (nonatomic) double checklistZoomFactor;

- (id)init;
- (id)unzoomAttributedString:(id)arg1;
- (id)reallyZoomFontInAttributes:(id)arg1 zoomDirection:(_Bool)arg2;
- (struct UIFont *)zoomFont:(struct UIFont *)arg1;
- (struct UIFont *)unzoomFont:(struct UIFont *)arg1;
- (id)reallyZoomAttributes:(id)arg1 zoomDirection:(_Bool)arg2;
- (id)reallyZoomAttributedString:(id)arg1 zoomDirection:(_Bool)arg2;
- (id)zoomFontInAttributes:(id)arg1;
- (id)unzoomFontInAttributes:(id)arg1;
- (id)zoomAttributes:(id)arg1;
- (id)unzoomAttributes:(id)arg1;
- (id)zoomAttributedString:(id)arg1;

@end
