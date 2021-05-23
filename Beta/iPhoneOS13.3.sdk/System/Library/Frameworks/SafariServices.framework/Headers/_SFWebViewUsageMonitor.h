/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _SFWebViewUsageMonitor : NSObject

{
    NSString *_hostAppIdentifier;
    _Bool _userInteracted;
    _Bool _urlHasQueryString;
    _Bool _urlHasIDFA;
    _Bool _viewControllerViewIsHidden;
}

@property (nonatomic) _Bool userInteracted;
@property (nonatomic) _Bool urlHasQueryString;
@property (nonatomic) _Bool urlHasIDFA;
@property (nonatomic) _Bool viewControllerViewIsHidden;
@property (nonatomic, readonly) _Bool shouldAudit;
@property (nonatomic, readonly) NSString *stringAsAuditKey;

- (void)auditUsageIfNeeded;
- (id)initWithHostAppIdentifier:(id)arg1;
- (void)checkURL:(id)arg1;

@end
