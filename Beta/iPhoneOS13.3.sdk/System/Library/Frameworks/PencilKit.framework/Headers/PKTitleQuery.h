/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@class CHTitleQuery, NSString, PKDrawing;

@protocol PKTitleQueryDelegate;

@interface PKTitleQuery : NSObject

{
    id <PKTitleQueryDelegate> _delegate;
    CHTitleQuery *_titleQuery;
    PKDrawing *_drawing;
}

@property (retain, nonatomic) CHTitleQuery *titleQuery;
@property (retain, nonatomic) PKDrawing *drawing;
@property (weak, nonatomic) id <PKTitleQueryDelegate> delegate;
@property (copy, nonatomic, readonly) NSString *transcribedTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)pause;
- (void)start;
- (void)queryDidUpdateResult:(id)arg1;
- (id)initWithDrawing:(id)arg1;

@end
