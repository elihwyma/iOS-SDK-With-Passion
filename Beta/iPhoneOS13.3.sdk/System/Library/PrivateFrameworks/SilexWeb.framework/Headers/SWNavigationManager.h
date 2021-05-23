/*
 Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, SWNavigationPreview;

@interface SWNavigationManager : NSObject

{
    NSMutableArray *_handlers;
    NSMutableDictionary *_schemeHandlers;
    NSMutableDictionary *_extensionHandlers;
    NSMutableSet *_observers;
    SWNavigationPreview *_currentPreview;
}

@property (nonatomic, readonly) NSMutableArray *handlers;
@property (nonatomic, readonly) NSMutableDictionary *schemeHandlers;
@property (nonatomic, readonly) NSMutableDictionary *extensionHandlers;
@property (nonatomic, readonly) NSMutableSet *observers;
@property (retain, nonatomic) SWNavigationPreview *currentPreview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)registerHandler:(id)arg1;
- (void)commitViewController:(id)arg1;
- (unsigned long long)actionForRequest:(id)arg1;
- (id)previewViewControllerForRequest:(id)arg1;
- (_Bool)shouldPreviewRequest:(id)arg1;
- (void)registerHandler:(id)arg1 scheme:(id)arg2;
- (void)registerHandler:(id)arg1 extension:(id)arg2;

@end
