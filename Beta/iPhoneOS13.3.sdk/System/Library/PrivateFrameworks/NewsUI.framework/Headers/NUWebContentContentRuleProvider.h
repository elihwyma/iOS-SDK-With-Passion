/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol FCHeadlineProviding, FCNewsAppConfigurationManager;

@interface NUWebContentContentRuleProvider : NSObject

{
    id <FCNewsAppConfigurationManager> _appConfigurationManager;
    id <FCHeadlineProviding> _headline;
}

@property (nonatomic, readonly) id <FCNewsAppConfigurationManager> appConfigurationManager;
@property (nonatomic, readonly) id <FCHeadlineProviding> headline;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)contentRules;
- (id)initWithAppConfigurationManager:(id)arg1 headline:(id)arg2;

@end
