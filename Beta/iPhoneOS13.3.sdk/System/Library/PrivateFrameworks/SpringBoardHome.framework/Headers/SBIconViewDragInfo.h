/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface SBIconViewDragInfo : NSObject

{
    NSString *_bundleIdentifier;
    NSURL *_launchURL;
    long long _startLocation;
}

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSURL *launchURL;
@property (nonatomic) long long startLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;

@end
