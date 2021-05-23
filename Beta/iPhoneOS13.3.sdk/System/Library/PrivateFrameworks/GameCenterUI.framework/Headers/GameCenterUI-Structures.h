/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

typedef void (*CDUnknownFunctionPointerType)(void);
typedef void (^CDUnknownBlockType)(void);

struct CAMeshVertex {
    struct CGPoint _field1;
    struct CAPoint3D _field2;
};

struct CAPoint3D {
    double _field1;
    double _field2;
    double _field3;
};

struct CATransform3D {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    double _field11;
    double _field12;
    double _field13;
    double _field14;
    double _field15;
    double _field16;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct GKVertexCurve {
    struct CGPoint _field1;
    struct CGPoint _field2;
    struct CGPoint _field3;
    struct CGPoint _field4;
    struct CGPoint _field5;
};

struct HSVColor {
    double _field1;
    double _field2;
    double _field3;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

typedef struct {
    unsigned int respondsTo_bubbleAnimatorForTransitionFromViewController:1;
    unsigned int respondsTo_bubbleAnimatorForTransitionToViewController:1;
    unsigned int respondsTo_bubbleAnimatorForRotation:1;
    unsigned int respondsTo_finalScreenFrameInViewCoordinatesForBubbleOfType:1;
    unsigned int respondsTo_configureControlForBubble:1;
    unsigned int respondsTo_bubblesUsedForAnyTransition:1;
    unsigned int respondsTo_bubbleFlowAnimateInDuration:1;
    unsigned int respondsTo_bubbleFlowAnimateOutDuration:1;
    unsigned int respondsTo_bubbleFlowSubviewFadeOutDuration:1;
    unsigned int respondsTo_bubbleFlowSubviewFadeOutDelay:1;
    unsigned int respondsTo_bubbleFlowSubviewFadeInDuration:1;
    unsigned int respondsTo_bubbleFlowSubviewFadeInDelay:1;
    unsigned int respondsTo_viewWillAppearAnimated_bubbleFlow:1;
    unsigned int respondsTo_viewDidAppearAnimated_bubbleFlow:1;
    unsigned int respondsTo_viewWillDisappearAnimated_bubbleFlow:1;
    unsigned int respondsTo_viewDidDisappearAnimated_bubbleFlow:1;
    unsigned int respondsTo_viewsToAnimateInWhileAppearingWithBubbleFlow:1;
    unsigned int respondsTo_viewsToAnimateOutWhileDisappearingWithBubbleFlow:1;
    unsigned int respondsTo_willAnimateAppearingWithBubbleFlow:1;
    unsigned int respondsTo_willAnimateDisappearingWithBubbleFlow:1;
    unsigned int respondsTo_willAnimateKeyframesForAppearingWithBubbleFlowFromRelativeStartTime_relativeDuration_absoluteTransitionDuration:1;
    unsigned int respondsTo_willAnimateKeyframesForDisappearingWithBubbleFlowFromRelativeStartTime_relativeDuration_absoluteTransitionDuration:1;
    unsigned int respondsTo_updateBubbleTextImmediatelyForTransitionFromViewController:1;
    unsigned int respondsTo_readyToDisappearWithBubbleFlow:1;
    unsigned int respondsTo_readyToAppearWithBubbleFlow:1;
    unsigned int respondsTo_delayDisappearingWithBubbleFlowUntil:1;
    unsigned int respondsTo_delayAppearingWithBubbleFlowUntil:1;
} CDStruct_b207fc29;
