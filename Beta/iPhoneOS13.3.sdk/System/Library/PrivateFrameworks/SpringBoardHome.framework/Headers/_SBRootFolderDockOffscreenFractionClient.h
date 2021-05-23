/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class NSString, SBRootFolderView;

@interface _SBRootFolderDockOffscreenFractionClient : NSObject

{
    NSString *_reason;
    SBRootFolderView *_folderView;
    double _desiredOffscreenFraction;
}

@property (retain, nonatomic) SBRootFolderView *folderView;
@property (nonatomic) double desiredOffscreenFraction;
@property (copy, nonatomic, readonly) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)setDockOffscreenFraction:(double)arg1;
- (id)initWithFolderView:(id)arg1 reason:(id)arg2;
- (void)layoutIfNeededForDockOffscreenFractionChanged;

@end
