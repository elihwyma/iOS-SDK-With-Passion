/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class NSString, SBRootFolderController;

@interface _SBRootFolderPageTransitionHandle : NSObject

{
    _Bool _valid;
    NSString *_reason;
    SBRootFolderController *_folderController;
    long long _sourcePageState;
    long long _destinationPageState;
    double _pageTransitionProgress;
}

@property (copy, nonatomic, readonly) NSString *reason;
@property (nonatomic, readonly) SBRootFolderController *folderController;
@property (nonatomic) long long sourcePageState;
@property (nonatomic) long long destinationPageState;
@property (nonatomic) double pageTransitionProgress;
@property (nonatomic, getter=isValid) _Bool valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)setTransitionProgress:(double)arg1;
- (void)endTransitionSuccessfully:(_Bool)arg1;
- (id)initWithFolderController:(id)arg1 destinationPageState:(long long)arg2 reason:(id)arg3;

@end
