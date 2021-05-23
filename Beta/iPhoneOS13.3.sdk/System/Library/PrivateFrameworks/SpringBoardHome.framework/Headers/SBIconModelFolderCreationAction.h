/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class NSIndexPath, NSString, SBFolder;

@interface SBIconModelFolderCreationAction : NSObject

{
    SBFolder *_folder;
    NSIndexPath *_indexPath;
}

@property (nonatomic, readonly) SBFolder *folder;
@property (copy, nonatomic, readonly) NSIndexPath *indexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithFolder:(id)arg1 indexPath:(id)arg2;

@end
