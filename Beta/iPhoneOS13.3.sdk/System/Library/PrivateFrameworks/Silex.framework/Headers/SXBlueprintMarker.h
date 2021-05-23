/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@protocol SXComponent, SXComponentAnchor;

@interface SXBlueprintMarker : NSObject

{
    id <SXComponent> _leadingComponent;
    id <SXComponent> _trailingComponent;
    NSArray *_path;
    id <SXComponentAnchor> _componentAnchor;
    struct CGPoint _approximateLocation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <SXComponent> leadingComponent;
@property (nonatomic, readonly) id <SXComponent> trailingComponent;
@property (nonatomic, readonly) struct CGPoint approximateLocation;
@property (nonatomic, readonly) NSArray *path;
@property (retain, nonatomic) id <SXComponentAnchor> componentAnchor;

- (id)initWithLeadingComponent:(id)arg1 trailingComponent:(id)arg2 approximateLocation:(struct CGPoint)arg3 path:(id)arg4;
- (_Bool)isEqualToMarker:(id)arg1;

@end
