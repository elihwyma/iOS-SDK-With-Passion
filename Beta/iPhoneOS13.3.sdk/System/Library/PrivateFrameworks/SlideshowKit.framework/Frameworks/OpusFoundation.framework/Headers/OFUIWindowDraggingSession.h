/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

#import <NSObject.h>

@class NSMutableArray, NSMutableDictionary, OFUIWindow, UILabel, UIPasteboard, UIView;

@protocol OFUIWindowDraggingDestination, OFUIWindowDraggingSource;

@interface OFUIWindowDraggingSession : NSObject

{
    OFUIWindow *_window;
    NSMutableArray *_items;
    unsigned long long _animation;
    id <OFUIWindowDraggingSource> _source;
    id <OFUIWindowDraggingDestination> _destination;
    unsigned long long _formation;
    unsigned long long _sourceOperation;
    unsigned long long _destinationOperation;
    _Bool _showBadge;
    UIView *_badgeView;
    UILabel *_badgeLabel;
    unsigned long long _state;
    _Bool _delayUpdates;
    UIView *_presentationView;
    struct CGSize _presentationViewSize;
    struct CGPoint _position;
    UIPasteboard *_pasteboard;
    NSMutableDictionary *_pasteboardCache;
}

@property (nonatomic) OFUIWindow *window;
@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) id <OFUIWindowDraggingSource> source;
@property (retain, nonatomic) id <OFUIWindowDraggingDestination> destination;
@property (nonatomic) unsigned long long sourceOperation;
@property (nonatomic) unsigned long long destinationOperation;
@property (nonatomic) unsigned long long state;
@property (nonatomic) struct CGPoint position;
@property (retain, nonatomic) UIPasteboard *pasteboard;
@property (nonatomic) unsigned long long animation;
@property (nonatomic) unsigned long long formation;
@property (nonatomic) _Bool showBadge;
@property (nonatomic) _Bool delayUpdates;
@property (retain, nonatomic) UIView *presentationView;
@property (nonatomic) struct CGSize presentationViewSize;

- (id)init;
- (void)dealloc;
- (void)addItem:(id)arg1;
- (_Bool)isDragging;
- (unsigned long long)numberOfItems;
- (unsigned long long)indexOfItem:(id)arg1;
- (void)moveToPosition:(struct CGPoint)arg1;
- (void)_updateBadge;
- (void)beginDragging;
- (id)initWithWindow:(id)arg1 items:(id)arg2 position:(struct CGPoint)arg3 source:(id)arg4;
- (void)endDragging:(_Bool)arg1;
- (void)updatePresentationViewOrientation:(id)arg1;
- (void)_updateView:(id)arg1 orientation:(long long)arg2 animated:(_Bool)arg3;
- (id)_hitDestinationInSuperview:(id)arg1;
- (void)updateDragging;
- (void)_updatePresentationViewWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)itemsContainObject:(id)arg1;
- (void)_updateDraggingInSameWindow;
- (id)_hitDestinationInView:(id)arg1;
- (void)_finishPresentationViewWithCompletion:(CDUnknownBlockType)arg1;
- (id)objectsForPasteboardType:(id)arg1 transcodeBlock:(CDUnknownBlockType)arg2 cache:(_Bool)arg3;

@end
