/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

@class FBSDisplayConfiguration, NSOrderedSet;

@interface _FBSSnapshotContext : NSObject

{
    FBSDisplayConfiguration *_displayConfiguration;
    NSOrderedSet *_layers;
    _Bool _opaque;
    double _scale;
    struct CGSize _snapshotSize;
    _Bool _allowsProtectedContent;
}

@property (nonatomic, readonly) FBSDisplayConfiguration *displayConfiguration;
@property (nonatomic, readonly) NSOrderedSet *layers;
@property (nonatomic, getter=isOpaque) _Bool opaque;
@property (nonatomic) double scale;
@property (nonatomic) struct CGSize snapshotSize;
@property (nonatomic) _Bool allowsProtectedContent;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDisplayConfiguration:(id)arg1 layers:(id)arg2;
- (id)initWithDisplayConfiguration:(id)arg1 layer:(id)arg2;

@end
