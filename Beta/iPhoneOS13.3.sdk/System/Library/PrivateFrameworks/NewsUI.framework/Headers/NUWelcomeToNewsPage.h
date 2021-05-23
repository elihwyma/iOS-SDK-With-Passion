/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSString, NUPageStyle, NUWelcomeToNewsViewController;

@protocol NURouter;

@interface NUWelcomeToNewsPage : NSObject

{
    id <NURouter> _router;
    NUWelcomeToNewsViewController *_welcomeToNewsViewController;
    unsigned long long _pageNextAction;
    NUPageStyle *_pageStyle;
}

@property (nonatomic, readonly) id <NURouter> router;
@property (retain, nonatomic) NUWelcomeToNewsViewController *welcomeToNewsViewController;
@property (nonatomic) unsigned long long pageNextAction;
@property (retain, nonatomic) NUPageStyle *pageStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) _Bool allowNeighboringAdvertising;

- (id)viewController;
- (void)prepare;
- (void)unprepare;
- (void)pageStyling:(CDUnknownBlockType)arg1;
- (void)activityProvider:(CDUnknownBlockType)arg1;
- (id)initWithRouter:(id)arg1;

@end
