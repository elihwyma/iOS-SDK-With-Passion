/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXComponent;

@interface SXPastBodyComponentInsertionCondition : NSObject

{
    id <SXComponent> _firstBodyComponent;
    struct CGPoint _firstBodyComponentThreshold;
}

@property (retain, nonatomic) id <SXComponent> firstBodyComponent;
@property (nonatomic) struct CGPoint firstBodyComponentThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)validateMarker:(id)arg1 componentTraits:(unsigned long long)arg2 layoutProvider:(id)arg3;
- (void)prepareWithComponents:(id)arg1 layoutProvider:(id)arg2;
- (id)findFirstBodyComponentInComponents:(id)arg1;

@end
