/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SBHFolderIconVisualConfiguration : NSObject

{
    struct CGSize _gridCellSize;
    struct CGSize _gridCellSpacing;
}

@property (nonatomic) struct CGSize gridCellSize;
@property (nonatomic) struct CGSize gridCellSpacing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;

@end
