/*
 Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <QuartzCore/CALayer.h>

@class BubbleTextLayer, NSMutableArray, NSString, NSTimer, TopoNumberBadge, TopoProgressBar, UIImage;

@interface NetTopoObjectLayer : CALayer

{
    id _associatedNode;
    id _owningView;
    double _layoutScale;
    _Bool _smallSize;
    int _topoStyle;
    struct CGSize _boundsSizeConstraint;
    UIImage *_statusBadgeImage;
    _Bool _selectable;
    struct CGColor *_selectionColor;
    struct CGColor *_labelUnselectedFillColor;
    struct CGColor *_labelSelectedFillColor;
    struct CGColor *_labelSelectedFillColor2;
    struct CGColor *_labelUnselectedTextColor;
    struct CGColor *_labelSelectedTextColor;
    struct CGColor *_secondaryLabelUnselectedTextColor;
    struct CGColor *_secondaryLabelSelectedTextColor;
    struct CGRect _imageFrame;
    struct CGRect _imageCoreFrame;
    struct CGRect _imageSelectionFrame;
    double _selectionCornerRadius;
    double _selectionRectOutset;
    NSString *_labelString;
    BubbleTextLayer *_labelLayer;
    double _labelPinnedHeight;
    NSString *_secondaryLabelString;
    BubbleTextLayer *_secondaryLabelLayer;
    UIImage *_statusLights[4];
    NSTimer *_statusLightTimer;
    float _statusLightInterval;
    unsigned int _statusLightState;
    unsigned int _statusLightMode;
    TopoNumberBadge *_topoNumberBadge;
    unsigned long long _topoBadgeNumber;
    TopoProgressBar *_topoProgressBar;
    float _topoProgressValue;
    id _userObject;
    NSString *_saveLable;
    unsigned long long _row;
    unsigned long long _column;
    struct CGPoint _layoutOrigin;
    unsigned long long _number;
    double _prelim;
    double _mod;
    double _change;
    double _shift;
    _Bool _isExpanded;
    NetTopoObjectLayer *_contourThread;
    NetTopoObjectLayer *_ancestor;
    _Bool _selected;
    _Bool _ghosted;
    NetTopoObjectLayer *_parent;
    NSMutableArray *_children;
    NSString *_saveLabel;
    struct CGImage *_objectImage;
}

@property (nonatomic) double layoutScale;
@property (nonatomic) _Bool smallSize;
@property (nonatomic) struct CGSize boundsSizeConstraint;
@property (nonatomic) unsigned long long row;
@property (nonatomic) unsigned long long column;
@property (nonatomic) struct CGPoint layoutOrigin;
@property (nonatomic) double prelim;
@property (nonatomic) double mod;
@property (nonatomic) double change;
@property (nonatomic) double shift;
@property (nonatomic) unsigned long long number;
@property (nonatomic, getter=isExpanded) _Bool expanded;
@property (nonatomic) NetTopoObjectLayer *contourThread;
@property (nonatomic) NetTopoObjectLayer *ancestor;
@property (retain, nonatomic) id associatedNode;
@property (nonatomic) id owningView;
@property (retain, nonatomic) NSString *label;
@property (nonatomic) double labelPinnedHeight;
@property (retain, nonatomic) NSString *secondaryLabel;
@property (retain, nonatomic) NetTopoObjectLayer *parent;
@property (nonatomic, readonly) NetTopoObjectLayer *parentDevice;
@property (retain, nonatomic) NSMutableArray *children;
@property (nonatomic, readonly) unsigned long long numberOfChildren;
@property (retain, nonatomic) struct CGImage *objectImage;
@property (retain, nonatomic) UIImage *statusBadgeImage;
@property (nonatomic) unsigned int statusLightMode;
@property (nonatomic) unsigned long long topoBadgeNumber;
@property (nonatomic) float topoProgressValue;
@property (retain, nonatomic) id userObject;
@property (retain, nonatomic) NSString *saveLabel;
@property (nonatomic, getter=isSelectable) _Bool selectable;
@property (nonatomic, getter=isSelected) _Bool selected;
@property (nonatomic, getter=isGhosted) _Bool ghosted;

+ (_Bool)needsDisplayForKey:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)debugDescription;
- (void)addChild:(id)arg1;
- (id)firstChild;
- (void)removeChild:(id)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)lastChild;
- (void)layoutSublayers;
- (id)childAtIndex:(unsigned long long)arg1;
- (void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)loadStatusImagesForScale:(double)arg1;
- (void)initNetTopoObjectLayerCommonWithStyle:(int)arg1 andOwningView:(id)arg2;
- (void)deallocStatusImages;
- (void)setStatusBadgeImagePriv:(id)arg1;
- (void)setStatusLightStateFromMode;
- (void)statusLightUpdateTimer:(id)arg1;
- (id)describeOne:(id)arg1 uiLayer:(id)arg2 indent:(unsigned long long)arg3;
- (id)initWithUIStyle:(int)arg1 andOwningView:(id)arg2;
- (void)pickCorrectImagesForContentsScale:(double)arg1;
- (CDStruct_f9662865)getConnectionAttachmentLocations;
- (struct CGRect)getUserInteractionBounds;
- (struct CGRect)getFrameContainingAllSublayers;

@end
