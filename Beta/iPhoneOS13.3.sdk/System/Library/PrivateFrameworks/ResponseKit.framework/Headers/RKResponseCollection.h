/*
 Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSURL;

@protocol RKDisplayStringsProvider;

@interface RKResponseCollection : NSObject

{
    NSMutableDictionary *_responseCatalog;
    NSMutableDictionary *_personalizersByLanguageID;
    NSURL *_dynamicDataURL;
    id <RKDisplayStringsProvider> _displayStringsProvider;
}

@property (retain) NSMutableDictionary *responseCatalog;
@property (retain) NSMutableDictionary *personalizersByLanguageID;
@property (readonly) NSURL *dynamicDataURL;
@property (readonly) id <RKDisplayStringsProvider> displayStringsProvider;

+ (id)speechActsForCategory:(unsigned long long)arg1 platform:(id)arg2;
+ (id)responsesForFixedPhrase:(id)arg1 withLanguage:(id)arg2;
+ (id)responsesForFullScreenMoments:(id)arg1;
+ (id)responsesForFullScreenMoments:(id)arg1 withLanguage:(id)arg2;

- (void)flushDynamicData;
- (id)personalizerForLanguageID:(id)arg1;
- (id)standardResponsesByCategoryForLanguageIdentifier:(id)arg1 andUsage:(id)arg2;
- (id)initWithDynamicDataURL:(id)arg1 displayStringsProvider:(id)arg2;
- (void)resetRegisteredResponses;
- (id)cannedResponsesForCategory:(id)arg1 withLanguage:(id)arg2 options:(unsigned long long)arg3;
- (id)responsesForCategory:(unsigned long long)arg1 gender:(unsigned long long)arg2 maximumResponses:(unsigned long long)arg3 withLanguage:(id)arg4 context:(id)arg5 options:(unsigned long long)arg6;
- (void)registerResponse:(id)arg1 forMessage:(id)arg2 withLanguage:(id)arg3 context:(id)arg4 effectiveDate:(id)arg5;

@end
