/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@protocol OS_dispatch_queue;

@interface _SFSearchEngineController : NSObject

{
    NSArray *_searchEngines;
    unsigned long long _defaultSearchEngineIndex;
    NSObject<OS_dispatch_queue> *_searchEngineArrayAccessQueue;
    NSString *_countryCode;
    NSDictionary *_templateParameterValues;
    NSDictionary *_carrierTemplateParameterValues;
}

@property (copy, nonatomic, readonly) NSArray *engines;
@property (copy, nonatomic, readonly) NSArray *enginesAvailableForUnifiedFieldSearching;
@property (copy, nonatomic, readonly) NSArray *searchEngineNames;
@property (copy, nonatomic, readonly) NSString *defaultSearchEngineName;
@property (nonatomic, readonly) NSString *countryCode;
@property (nonatomic, readonly) NSDictionary *templateParameterValues;
@property (nonatomic, readonly) NSDictionary *carrierTemplateParameterValues;

+ (id)sharedInstance;
+ (void)_initializeSharedInstance;
+ (_Bool)_deviceRegionCodeIsChina;
+ (void)loadSystemLanguageProperties;
+ (id)sharedInstanceIfAvailable;

- (id)init;
- (id)description;
- (void)_populateSearchEngines;
- (void)_setEngines:(id)arg1 defaultSearchEngineIndex:(unsigned long long)arg2;
- (void)_loadSystemProperties;
- (void)_addAllWebSearchEngineInfosToArray:(id)arg1 andAddUserVisibleWebSearchEngineInfosToArray:(id)arg2;
- (void)_addSpecialSearchEnginesToArray:(id)arg1;
- (void)_setDefaultSearchEngine:(id)arg1;
- (void)_getEngines:(id *)arg1 defaultSearchEngineIndex:(unsigned long long *)arg2;
- (id)defaultSearchEngine;
- (id)_existingEngineInfoFor:(id)arg1;
- (void)reloadSearchEngines;
- (void)setDefaultSearchEngine:(id)arg1;
- (id)engineInfoFor:(id)arg1;
- (id)engineInfoForScriptName:(id)arg1;
- (id)safeSearchRequestForSearchRequest:(id)arg1;

@end
