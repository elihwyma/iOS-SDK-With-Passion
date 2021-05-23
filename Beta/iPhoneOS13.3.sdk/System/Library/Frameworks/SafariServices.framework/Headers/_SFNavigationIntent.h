/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, NSURL, NSUUID, WBSCloudTab, WebBookmark, _SFTabStateData, _WKActivatedElementInfo;

@interface _SFNavigationIntent : NSObject

{
    id _value;
    _Bool _isUnifiedFieldNavigation;
    _Bool _shouldRelateToSourceTab;
    unsigned long long _type;
    long long _policy;
    NSUUID *_sourceTabUUID;
    NSUUID *_sourceWindowUUID;
    _WKActivatedElementInfo *_sourceElementInfo;
}

@property (nonatomic) long long policy;
@property (nonatomic) _Bool shouldRelateToSourceTab;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) WebBookmark *bookmark;
@property (nonatomic, readonly) WBSCloudTab *cloudTab;
@property (nonatomic, readonly) _SFTabStateData *recentlyClosedTabStateData;
@property (copy, nonatomic, readonly) NSURL *URL;
@property (copy, nonatomic, readonly) NSString *text;
@property (copy, nonatomic, readonly) NSArray *navigationIntents;
@property (nonatomic, readonly) _Bool opensInNewTab;
@property (nonatomic, readonly) _Bool opensInNewWindow;
@property (nonatomic, readonly) _Bool canUseExistingBlankTab;
@property (nonatomic, readonly) _Bool shouldOrderToForeground;
@property (copy, nonatomic, readonly) NSDictionary *externalOptions;
@property (nonatomic) _Bool isUnifiedFieldNavigation;
@property (retain, nonatomic) NSUUID *sourceTabUUID;
@property (retain, nonatomic) NSUUID *sourceWindowUUID;
@property (retain, nonatomic) _WKActivatedElementInfo *sourceElementInfo;
@property (copy, nonatomic, readonly) NSString *privacyPreservingDescription;

- (id)description;
- (id)_initWithType:(unsigned long long)arg1 value:(id)arg2 policy:(long long)arg3;

@end
