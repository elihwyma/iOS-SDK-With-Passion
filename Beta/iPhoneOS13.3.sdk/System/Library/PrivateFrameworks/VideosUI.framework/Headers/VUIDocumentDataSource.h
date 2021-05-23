/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSString, VUIDocumentContextData, VUIDocumentPreFetchedData, VUIDocumentUIConfiguration;

@interface VUIDocumentDataSource : NSObject

{
    _Bool _shouldLoadPageImmediately;
    NSString *_documentRef;
    VUIDocumentContextData *_contextData;
    VUIDocumentPreFetchedData *_prefetchData;
    VUIDocumentUIConfiguration *_uiConfiguration;
}

@property (retain, nonatomic) NSString *documentRef;
@property (retain, nonatomic) VUIDocumentContextData *contextData;
@property (retain, nonatomic) VUIDocumentPreFetchedData *prefetchData;
@property (retain, nonatomic) VUIDocumentUIConfiguration *uiConfiguration;
@property (nonatomic) _Bool shouldLoadPageImmediately;

+ (id)documentDataSourceWithDictionary:(id)arg1;

- (id)jsonData;
- (id)initWithDocumentRef:(id)arg1;
- (id)viewControllerWithAppContext:(id)arg1;
- (id)viewControllerWithAppContext:(id)arg1 viewElement:(id)arg2 documentOptions:(id)arg3;
- (id)initWithDataSourceDict:(id)arg1;
- (id)viewControllerWithAppContext:(id)arg1 documentOptions:(id)arg2;

@end
