/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSString, TVApplicationController, _TVInspectorCapturingView;

@interface _TVApplicationInspector : NSObject

{
    _Bool _inspectionModeEnabled;
    NSHashTable *_highlightViews;
    _TVInspectorCapturingView *_capturingView;
    TVApplicationController *_applicationController;
}

@property (nonatomic, readonly) _TVInspectorCapturingView *capturingView;
@property (nonatomic, readonly) NSHashTable *highlightViews;
@property (weak, nonatomic, readonly) TVApplicationController *applicationController;
@property (nonatomic, getter=isInspectionModeEnabled) _Bool inspectionModeEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)rootView;
- (void)cancelHighlight;
- (id)initWithApplicationController:(id)arg1;
- (void)highlightViewElements:(id)arg1 contentColor:(id)arg2 borderColor:(id)arg3;
- (void)capturingView:(id)arg1 didCaptureTapOnView:(id)arg2;
- (id)_highlightViewForElement:(id)arg1 contentColor:(id)arg2 borderColor:(id)arg3;

@end
