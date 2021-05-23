/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVTask.h>

@class NSError, NSSet, NSString;

@protocol CoreDAVAccountInfoProvider, CoreDAVTaskManager;

@interface CoreDAVContainerMultiGetTask : CoreDAVTask

{
    NSSet *_urls;
    NSString *_appSpecificNamespace;
    NSString *_appSpecificMultiGetNameSpace;
    NSString *_appSpecificMultiGetCommand;
    NSString *_appSpecificDataProp;
    Class _appSpecificDataItemClass;
    _Bool _shouldIgnoreResponseErrors;
    NSSet *_additionalPropElements;
    NSSet *_parsedContents;
    NSSet *_missingURLs;
    NSSet *_deletedURLs;
}

@property (retain, nonatomic) NSSet *additionalPropElements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (nonatomic) id <CoreDAVTaskManager> taskManager;
@property (nonatomic) id <CoreDAVAccountInfoProvider> accountInfoProvider;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic) double timeoutInterval;
@property (nonatomic, readonly) NSSet *missingURLs;
@property (nonatomic, readonly) NSSet *deletedURLs;
@property (nonatomic, readonly) NSSet *parsedContents;
@property (nonatomic) _Bool shouldIgnoreResponseErrors;

- (id)httpMethod;
- (id)requestBody;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)copyDefaultParserForContentType:(id)arg1;
- (id)initWithURLs:(id)arg1 atContainerURL:(id)arg2 appSpecificDataItemClass:(Class)arg3;
- (id)copyAdditionalPropElements;
- (void)setAdditionalProperties:(id)arg1 onDataItem:(id)arg2;

@end
