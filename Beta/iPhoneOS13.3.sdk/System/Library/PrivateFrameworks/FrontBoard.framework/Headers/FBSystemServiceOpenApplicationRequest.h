/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

@class FBProcess, FBSOpenApplicationOptions, NSString;

@interface FBSystemServiceOpenApplicationRequest : NSObject

{
    NSString *_bundleIdentifier;
    FBSOpenApplicationOptions *_options;
    FBProcess *_clientProcess;
    _Bool _trusted;
}

@property (nonatomic, getter=isTrusted) _Bool trusted;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) FBSOpenApplicationOptions *options;
@property (retain, nonatomic) FBProcess *clientProcess;

+ (id)request;

- (id)description;

@end
