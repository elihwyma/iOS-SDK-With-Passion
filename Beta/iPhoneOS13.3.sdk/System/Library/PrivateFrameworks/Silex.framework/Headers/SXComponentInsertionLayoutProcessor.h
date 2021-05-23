/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, SXLayoutOptions;

@protocol SXComponentInsertionManager;

@interface SXComponentInsertionLayoutProcessor : NSObject

{
    id <SXComponentInsertionManager> _componentInsertionManager;
    SXLayoutOptions *_layoutOptions;
}

@property (nonatomic, readonly) id <SXComponentInsertionManager> componentInsertionManager;
@property (retain, nonatomic) SXLayoutOptions *layoutOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)processLayoutTask:(id)arg1 layoutBlueprint:(id)arg2 DOMObjectProvider:(id)arg3;
- (id)initWithComponentInsertionManager:(id)arg1;

@end
