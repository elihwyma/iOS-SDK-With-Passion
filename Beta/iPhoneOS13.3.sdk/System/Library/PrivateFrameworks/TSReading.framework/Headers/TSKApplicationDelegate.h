/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol TSKCompatibilityDelegate;

@interface TSKApplicationDelegate : NSObject

{
    id <TSKCompatibilityDelegate> _compatibilityDelegate;
}

@property (nonatomic, readonly) _Bool tableHeaderInspectorShowsFreezeHeaderRowsSwitch;
@property (nonatomic, readonly) _Bool tableHeaderInspectorShowsFreezeHeaderColumnsSwitch;
@property (nonatomic, readonly) _Bool tableHeaderInspectorShowsRepeatHeaderRowsSwitch;
@property (nonatomic, readonly) _Bool tableCellInspectorShowsNaturalAlignment;
@property (nonatomic, readonly) _Bool textInspectorShowsMoreSubpane;
@property (retain, nonatomic) id <TSKCompatibilityDelegate> compatibilityDelegate;
@property (nonatomic, readonly) NSString *applicationName;
@property (nonatomic, readonly) NSString *documentTypeDisplayName;
@property (nonatomic, readonly) NSString *templateTypeDisplayName;
@property (readonly, getter=isActivating) _Bool activating;
@property (readonly, getter=isInBackground) _Bool inBackground;
@property (nonatomic, readonly) _Bool designModeEnabled;
@property (nonatomic, readonly) _Bool performanceModeEnabled;
@property (nonatomic, readonly) _Bool centerOnInitialSelection;
@property (nonatomic, readonly) _Bool isCanvasFullScreen;

+ (_Bool)isUnitTesting;
+ (id)sharedDelegate;
+ (void)setSurrogateDelegate:(id)arg1;
+ (id)documentDirectoryPath;

- (id)init;
- (void)dealloc;
- (_Bool)openURL:(id)arg1;
- (id)createCompatibilityDelegate;
- (_Bool)openURL:(id)arg1 sourceDocumentRoot:(id)arg2;
- (struct CGRect)applicationToolbarFrame;
- (_Bool)shouldRenderContactShadow;
- (_Bool)shouldRenderCurvedShadow;
- (_Bool)supportsRTL;
- (_Bool)supportsScrollingInPhoneCommentUI;
- (_Bool)shouldValidateMasterLayoutWhileInsertingRows;
- (id)previewImageForType:(id)arg1;
- (id)appChartPropertyOverrides;
- (id)invalidURLSchemes;
- (id)validURLSchemes;
- (id)defaultHyperlinkURL;
- (_Bool)shouldGenerateGuidesForOffscreenLayouts;
- (id)toolbarButtonForModalDoneWithTarget:(id)arg1 action:(SEL)arg2;

@end
