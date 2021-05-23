/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, VUIAction;

__attribute__((visibility("hidden")))
@interface VUIOpenURLRouterDataSource : NSObject

{
    _Bool _actionFirst;
    NSArray *_documentDataSources;
    VUIAction *_action;
    NSString *_tabIdentifier;
    NSDictionary *_localLibraryLink;
    NSString *_nativePageName;
}

@property (copy, nonatomic) NSArray *documentDataSources;
@property (retain, nonatomic) VUIAction *action;
@property (retain, nonatomic) NSString *tabIdentifier;
@property (copy, nonatomic) NSDictionary *localLibraryLink;
@property (retain, nonatomic) NSString *nativePageName;
@property (nonatomic) _Bool actionFirst;

+ (id)routerDataSourceWithDict:(id)arg1 appContext:(id)arg2;

@end
