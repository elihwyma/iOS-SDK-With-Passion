/*
 Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface AKURLRequestApprover : NSObject

{
    NSArray *_whiteListedPaths;
}

- (id)initWithWhitelistedPaths:(id)arg1;
- (_Bool)shouldAllowRequest:(id)arg1;
- (_Bool)_matchInputAgainstPaths:(id)arg1;

@end
