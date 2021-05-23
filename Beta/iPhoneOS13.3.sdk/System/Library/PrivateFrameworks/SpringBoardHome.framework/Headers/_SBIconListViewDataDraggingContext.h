/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class NSString, SBIconView;

@interface _SBIconListViewDataDraggingContext : NSObject

{
    _Bool _allowsMoveOperation;
    SBIconView *_iconView;
    NSString *_bestAvailableUTI;
    long long _fileOptions;
}

@property (nonatomic, readonly) SBIconView *iconView;
@property (nonatomic, readonly) NSString *bestAvailableUTI;
@property (nonatomic, readonly) _Bool allowsMoveOperation;
@property (nonatomic, readonly) long long fileOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithIconView:(id)arg1 bestUTI:(id)arg2 allowsMoveOperation:(_Bool)arg3 fileOptions:(long long)arg4;

@end
