/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class FCObservable, NSString;

@interface NUDocumentSectionBlueprintProvider : NSObject

{
    FCObservable *_tempObservableHeaderBlueprint;
    FCObservable *_tempObservableFooterBlueprint;
    FCObservable *_tempObservableContentOverlayBlueprintData;
}

@property (nonatomic, readonly) FCObservable *tempObservableHeaderBlueprint;
@property (nonatomic, readonly) FCObservable *tempObservableFooterBlueprint;
@property (nonatomic, readonly) FCObservable *tempObservableContentOverlayBlueprintData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)observableHeaderBlueprint;
- (id)observableContentOverlayBlueprintData;
- (id)observableFooterBlueprint;

@end
