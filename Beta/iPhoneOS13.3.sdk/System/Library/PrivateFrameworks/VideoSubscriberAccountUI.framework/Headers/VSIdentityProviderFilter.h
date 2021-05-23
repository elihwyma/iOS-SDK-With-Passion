/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface VSIdentityProviderFilter : NSObject

{
    NSArray *_allIdentityProviders;
    NSArray *_supportedAccountProviderIDs;
    NSString *_searchQuery;
}

@property (copy, nonatomic) NSArray *allIdentityProviders;
@property (copy, nonatomic) NSArray *supportedAccountProviderIDs;
@property (copy, nonatomic) NSString *searchQuery;
@property (copy, nonatomic, readonly) NSArray *filteredIdentityProviders;

+ (id)keyPathsForValuesAffectingFilteredIdentityProviders;

- (id)init;

@end
