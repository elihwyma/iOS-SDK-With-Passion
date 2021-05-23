/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSString, UITraitCollection;

@interface NULayoutContext : NSObject

{
    UITraitCollection *_traitCollection;
    struct CGRect _bounds;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UITraitCollection *traitCollection;
@property (nonatomic, readonly, getter=isLandscape) _Bool landscape;
@property (nonatomic, readonly) struct CGRect bounds;

- (id)initWithTraitCollection:(id)arg1 bounds:(struct CGRect)arg2;

@end
