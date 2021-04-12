//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIActivityItemProvider.h"

@class UIDocumentInteractionController;

@interface _UIDICActivityItemProvider : UIActivityItemProvider
{
    UIDocumentInteractionController *_documentInteractionController;
}

@property(readonly, nonatomic) __weak UIDocumentInteractionController *documentInteractionController; // @synthesize documentInteractionController=_documentInteractionController;
// - (void).cxx_destruct;
- (BOOL)_shouldExecuteItemOperationForActivity:(id)arg1;
- (void)main;
- (id)activityViewController:(id)arg1 openURLAnnotationForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)item;
- (id)loadedURL;
- (id)initWithPlaceholderItem:(id)arg1 documentInteractionController:(id)arg2;

@end

