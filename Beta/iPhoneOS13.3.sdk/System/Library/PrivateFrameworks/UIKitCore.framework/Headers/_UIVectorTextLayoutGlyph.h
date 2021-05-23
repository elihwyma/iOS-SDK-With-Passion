/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIBezierPath;

__attribute__((visibility("hidden")))
@interface _UIVectorTextLayoutGlyph : NSObject

{
    unsigned short _glyph;
    UIBezierPath *_path;
    struct CGRect _rect;
    struct CGAffineTransform _pathTransform;
}

@property (nonatomic) unsigned short glyph;
@property (nonatomic) struct CGRect rect;
@property (retain, nonatomic) UIBezierPath *path;
@property (nonatomic) struct CGAffineTransform pathTransform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

@end
