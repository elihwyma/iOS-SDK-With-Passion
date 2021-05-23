/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

#import <TSReading/Swift-Protocol.h>

@class NSString, TSDRep;

@protocol TSDGestureDelegate, TSDGestureTarget;

@interface TSWPDummyTapGesture : NSObject <Swift>

{
    int gestureState;
    id <TSDGestureTarget> cachedGestureTarget;
    id <TSDGestureDelegate> gestureDelegate;
    NSString *_gestureKind;
    TSDRep *targetRep;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) id <TSDGestureTarget> cachedGestureTarget;
@property (nonatomic) id <TSDGestureDelegate> gestureDelegate;
@property (retain, nonatomic) NSString *gestureKind;
@property (retain, nonatomic) TSDRep *targetRep;
@property (nonatomic, readonly) int gestureState;

- (void)dealloc;
- (id)initWithKind:(id)arg1;
- (_Bool)isDone;
- (struct CGPoint)unscaledLocationForICC:(id)arg1;
- (struct CGPoint)boundsLocationForICC:(id)arg1;
- (struct CGPoint)naturalLocationForRep:(id)arg1;

@end
