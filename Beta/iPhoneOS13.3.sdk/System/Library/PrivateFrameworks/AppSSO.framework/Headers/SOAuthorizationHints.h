/*
 Image: /System/Library/PrivateFrameworks/AppSSO.framework/AppSSO
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SOAuthorizationHints : NSObject

{
    NSString *_localizedExtensionBundleDisplayName;
}

@property (nonatomic, readonly) NSString *localizedExtensionBundleDisplayName;

- (id)description;
- (id)initWithAuthorizationHintsCore:(id)arg1;

@end
