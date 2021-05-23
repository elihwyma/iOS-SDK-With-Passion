/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <NSObject.h>

@class AceObject, NSUUID, UIViewController;

@protocol SiriUIViewController;

@interface SiriUITranscriptItem : NSObject

{
    _Bool _restored;
    _Bool _shouldBeExposed;
    _Bool _snippetViewControllerHasBeenUnloaded;
    NSUUID *_itemIdentifier;
    UIViewController<SiriUIViewController> *_viewController;
    AceObject *_aceObject;
    struct CGRect _previousFrame;
}

@property (copy, nonatomic) NSUUID *itemIdentifier;
@property (retain, nonatomic) UIViewController<SiriUIViewController> *viewController;
@property (retain, nonatomic) AceObject *aceObject;
@property (nonatomic, getter=isRestored) _Bool restored;
@property (nonatomic) _Bool shouldBeExposed;
@property (nonatomic) _Bool snippetViewControllerHasBeenUnloaded;
@property (nonatomic) struct CGRect previousFrame;

+ (id)transcriptItemWithAceObject:(id)arg1;

- (id)description;
- (id)initWithAceObject:(id)arg1;

@end
