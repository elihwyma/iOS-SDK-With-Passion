/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SXIssueCover : NSObject

{
    NSString *_issueIdentifier;
}

@property (nonatomic, readonly) NSString *issueIdentifier;

- (id)initWithIssueIdentifier:(id)arg1;

@end
