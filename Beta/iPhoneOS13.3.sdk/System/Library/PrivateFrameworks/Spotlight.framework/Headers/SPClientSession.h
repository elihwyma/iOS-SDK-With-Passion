/*
 Image: /System/Library/PrivateFrameworks/Spotlight.framework/Spotlight
 */

#import <Foundation/NSObject.h>

@class NSArray, PARSession;

@interface SPClientSession : NSObject

{
    NSArray *_searchDomains;
    _Bool _observersAdded;
    int _prefsToken;
    PARSession *_session;
    long long _contentFilter;
    _Bool _infinitePatience;
}

@property (readonly) NSArray *disabledBundleIds;
@property (nonatomic) _Bool infinitePatience;

+ (void)initialize;
+ (void)retrieveFirstTimeExperienceTextWithReply:(CDUnknownBlockType)arg1;

- (id)init;
- (void)dealloc;
- (void)activate;
- (void)deactivate;
- (void)preheat;
- (long long)contentFilters;
- (id)queryWithContext:(id)arg1;
- (_Bool)_setSearchDomains:(id)arg1;
- (void)finishRanking:(id)arg1 blendingDuration:(double)arg2;

@end
