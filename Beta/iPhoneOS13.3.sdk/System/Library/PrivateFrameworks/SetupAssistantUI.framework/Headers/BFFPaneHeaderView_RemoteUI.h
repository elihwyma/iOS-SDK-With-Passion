/*
 Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

#import <SetupAssistantUI/BFFPaneHeaderView.h>

@class NSString;

@protocol RUIHeaderDelegate;

@interface BFFPaneHeaderView_RemoteUI : BFFPaneHeaderView

{
    id <RUIHeaderDelegate> _rui_headerDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setDelegate:(id)arg1;
- (id)initWithAttributes:(id)arg1;
- (void)setImageSize:(struct CGSize)arg1;
- (id)headerLabel;
- (void)setIconImage:(id)arg1;
- (id)subHeaderLabel;
- (double)headerHeightForWidth:(double)arg1 inView:(id)arg2;
- (void)setText:(id)arg1 attributes:(id)arg2;
- (void)setSubHeaderText:(id)arg1 attributes:(id)arg2;
- (void)setDetailText:(id)arg1 attributes:(id)arg2;
- (void)setImageAlignment:(int)arg1;

@end
