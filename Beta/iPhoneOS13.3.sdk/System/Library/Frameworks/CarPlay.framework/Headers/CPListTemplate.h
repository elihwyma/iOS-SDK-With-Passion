/*
 Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

#import <CarPlay/CPTemplate.h>

@class CPBarButton, NAFuture, NSArray, NSString;

@protocol CPListTemplateDelegate;

@interface CPListTemplate : CPTemplate

{
    id <CPListTemplateDelegate> _delegate;
    NSArray *_sections;
    NSString *_title;
}

@property (retain, nonatomic) NAFuture *templateProviderFuture;
@property (weak, nonatomic) id <CPListTemplateDelegate> delegate;
@property (copy, nonatomic, readonly) NSArray *sections;
@property (copy, nonatomic, readonly) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSArray *leadingNavigationBarButtons;
@property (retain, nonatomic) NSArray *trailingNavigationBarButtons;
@property (retain, nonatomic) CPBarButton *backButton;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateSections:(id)arg1;
- (void)listTemplate:(id)arg1 didSelectListItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithTitle:(id)arg1 sections:(id)arg2;

@end
