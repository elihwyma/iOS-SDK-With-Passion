/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <WebUI/WBSSearchProvider.h>

@class NSString;

@interface _SFSearchEngineInfo : WBSSearchProvider

{
    int _searchID;
    NSString *_scriptName;
}

@property (nonatomic, readonly) int searchID;
@property (nonatomic, readonly) NSString *scriptName;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) int resultType;
@property (nonatomic, readonly) unsigned long long endpointType;

+ (unsigned long long)_endpointTypeForShortName:(id)arg1;
+ (int)_resultTypeForShortName:(id)arg1;
+ (id)engineFromDictionary:(id)arg1 withController:(id)arg2;
+ (_Bool)shouldIncludeEngineFromDictionary:(id)arg1 withController:(id)arg2;

- (id)description;
- (Class)classForCoder;
- (id)initWithName:(id)arg1 scriptName:(id)arg2 searchID:(int)arg3 searchTemplate:(id)arg4 hostSuffixes:(id)arg5 pathPrefixes:(id)arg6 usesSearchTermsFromFragment:(_Bool)arg7 suggestionsTemplate:(id)arg8 topLevelDomains:(id)arg9 safeSearchSuffix:(id)arg10 safeSearchURLQueryParameters:(id)arg11 carrierInfo:(id)arg12 controller:(id)arg13;
- (_Bool)searchShouldUseSafeSearchTemplate;

@end
