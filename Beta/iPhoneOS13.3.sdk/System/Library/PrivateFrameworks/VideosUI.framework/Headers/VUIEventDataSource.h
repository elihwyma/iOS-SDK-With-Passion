/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class VUIAction, VUIDocumentDataSource;

__attribute__((visibility("hidden")))
@interface VUIEventDataSource : NSObject

{
    VUIDocumentDataSource *_preActionDocumentDataSource;
    VUIAction *_preAction;
    VUIDocumentDataSource *_documentDataSource;
    VUIAction *_action;
    VUIDocumentDataSource *_postActionDocumentDataSource;
    VUIAction *_postAction;
}

@property (retain, nonatomic) VUIDocumentDataSource *preActionDocumentDataSource;
@property (retain, nonatomic) VUIAction *preAction;
@property (retain, nonatomic) VUIDocumentDataSource *documentDataSource;
@property (retain, nonatomic) VUIAction *action;
@property (retain, nonatomic) VUIDocumentDataSource *postActionDocumentDataSource;
@property (retain, nonatomic) VUIAction *postAction;

+ (id)eventDataSourceWithEventDict:(id)arg1 viewElement:(id)arg2;
+ (id)_documentDataSourceWithDict:(id)arg1 viewElement:(id)arg2;
+ (id)_actionForKey:(id)arg1 eventDict:(id)arg2 viewElement:(id)arg3;

@end
