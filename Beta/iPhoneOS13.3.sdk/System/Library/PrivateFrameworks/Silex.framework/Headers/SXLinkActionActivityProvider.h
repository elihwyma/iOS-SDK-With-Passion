/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXHost, SXLinkActionURLQualifier, SXURLHandling, SXURLPreviewing;

@interface SXLinkActionActivityProvider : NSObject

{
    id <SXURLHandling> _URLHandler;
    id <SXURLPreviewing> _URLPreviewing;
    id <SXHost> _host;
    id <SXLinkActionURLQualifier> _URLQualifier;
}

@property (nonatomic, readonly) id <SXURLHandling> URLHandler;
@property (nonatomic, readonly) id <SXURLPreviewing> URLPreviewing;
@property (nonatomic, readonly) id <SXHost> host;
@property (nonatomic, readonly) id <SXLinkActionURLQualifier> URLQualifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)open:(id)arg1;
- (id)activityGroupForAction:(id)arg1;
- (id)previewActivityForAction:(id)arg1;
- (void)openInSafari:(id)arg1;
- (id)initWithURLHandler:(id)arg1 URLPreviewing:(id)arg2 host:(id)arg3 URLQualifier:(id)arg4;

@end
