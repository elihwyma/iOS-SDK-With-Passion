/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface NEFilterBlockPage : NSObject

{
    NSString *_organization;
    NSURL *_pageTemplateURL;
    NSString *_userURL;
    NSString *_formActionURL;
    NSString *_unblockStyle;
    NSString *_remediationButtonText;
}

@property (readonly) NSURL *pageTemplateURL;
@property (copy) NSString *userURL;
@property (copy) NSString *formActionURL;
@property (copy) NSString *organization;
@property (copy) NSString *unblockStyle;
@property (copy) NSString *remediationButtonText;

- (id)init;
- (id)page;
- (id)_blockPage;
- (id)_css;

@end
