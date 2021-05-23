/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSURL.h>

@class NSString;

@interface NSURL (SafariServicesExtras)

@property (nonatomic, readonly) _Bool sf_isWebSearchURL;
@property (nonatomic, readonly) _Bool sf_isOfflineReadingListURL;
@property (nonatomic, readonly) _Bool sf_isTestWebArchiveURL;
@property (nonatomic, readonly) NSString *sf_absoluteStringWithoutFragment;
@property (nonatomic, readonly) _Bool sf_isFacetimeURL;
@property (nonatomic, readonly) NSString *_sf_topLevelDomain;
@property (nonatomic, readonly) NSString *_sf_highLevelDomainFromHostFallingBackToHostOrAbsoluteString;

+ (_Bool)_sf_canCreateURLsFromDropSession:(id)arg1;
+ (void)_sf_urlsFromDragItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

- (void)_sf_accessingSecurityScopedResource:(CDUnknownBlockType)arg1;

@end
