/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKJSObject.h>

@class NSArray, NSString;

@protocol IKAppNavigationController;

@interface IKJSNavigationDocument : IKJSObject

{
    struct {
        _Bool hasClear;
        _Bool hasSetDocuments;
        _Bool hasPresentModal;
        _Bool hasDismissModal;
    } _delegateSelectors;
    id <IKAppNavigationController> _navigationControllerDelegate;
}

@property (weak, nonatomic, readonly) id <IKAppNavigationController> navigationControllerDelegate;
@property (retain, nonatomic, readonly) NSArray *documents;
@property (readonly) NSString *OPTION_RETAIN_CONTEXT;

- (void)clear;
- (void)dismissModal;
- (id)initWithAppContext:(id)arg1 navigationController:(id)arg2;
- (void)popDocument;
- (void)popToDocument:(id)arg1;
- (void)popToRootDocument;
- (void)removeDocument:(id)arg1;
- (id)_makeAppDocumentWithDocument:(id)arg1;
- (void)_migrateMediaControllerFromDocument:(id)arg1 toDocument:(id)arg2;
- (void)pushDocument:(id)arg1:(id)arg2;
- (void)presentModal:(id)arg1:(id)arg2;
- (void)insertBeforeDocument:(id)arg1:(id)arg2:(id)arg3;
- (void)replaceDocument:(id)arg1:(id)arg2:(id)arg3;
- (void)setDocuments:(id)arg1:(id)arg2;

@end
