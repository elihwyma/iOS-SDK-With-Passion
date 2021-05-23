/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class EQKitBox, EQKitEnvironmentInstance, NSString;

@protocol EQKitRootNode;

@interface EQKitLayout : NSObject

{
    id <EQKitRootNode> mRoot;
    EQKitBox *mBox;
    double mAscent;
    double mDescent;
    double mLeading;
    double mNaturalAlignmentOffset;
    double mScale;
    _Bool mSingleLineHeight;
    EQKitEnvironmentInstance *mEnvironment;
}

@property (nonatomic, readonly) EQKitBox *box;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (double)depth;
- (double)width;
- (double)height;
- (_Bool)layoutWithContext:(id)arg1;
- (double)vsize;
- (struct CGRect)erasableBounds;
- (void)renderIntoContext:(struct CGContext *)arg1 offset:(struct CGPoint)arg2;
- (id)initWithRoot:(id)arg1 environment:(id)arg2;
- (double)naturalAlignmentOffset;

@end
