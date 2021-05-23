/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVTask.h>

@class NSSet, NSString;

@protocol CoreDAVContainerQueryTaskDelegate;

@interface CoreDAVContainerQueryTask : CoreDAVTask

{
    NSSet *_searchTerms;
    unsigned long long _searchLimit;
    NSString *_appSpecificNamespace;
    NSString *_appSpecificQueryCommand;
    NSString *_appSpecificDataProp;
    Class _appSpecificDataItemClass;
}

@property (weak, nonatomic) id <CoreDAVContainerQueryTaskDelegate> delegate;

+ (id)_copySearchTermsFromSearchString:(id)arg1;

- (id)httpMethod;
- (id)requestBody;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)copyDefaultParserForContentType:(id)arg1;
- (id)initWithSearchTerms:(id)arg1 searchLimit:(unsigned long long)arg2 atURL:(id)arg3 appSpecificDataItemClass:(Class)arg4;
- (void)addFiltersToXMLData:(id)arg1;
- (id)initWithSearchString:(id)arg1 searchLimit:(unsigned long long)arg2 atURL:(id)arg3 appSpecificDataItemClass:(Class)arg4;
- (id)_initWithSearchTerms:(id)arg1 searchLimit:(unsigned long long)arg2 atURL:(id)arg3 appSpecificDataItemClass:(Class)arg4;

@end
