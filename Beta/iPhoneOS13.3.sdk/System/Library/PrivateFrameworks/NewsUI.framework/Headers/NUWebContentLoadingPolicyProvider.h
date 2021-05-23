/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol FCHeadlineProviding;

@interface NUWebContentLoadingPolicyProvider : NSObject

{
    id <FCHeadlineProviding> _headline;
}

@property (nonatomic, readonly) id <FCHeadlineProviding> headline;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (unsigned long long)loadingPolicy;
- (id)initWithHeadline:(id)arg1;

@end
