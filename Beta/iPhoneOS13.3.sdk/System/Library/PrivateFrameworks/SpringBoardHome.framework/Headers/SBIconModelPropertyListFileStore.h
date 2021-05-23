/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface SBIconModelPropertyListFileStore : NSObject

{
    NSURL *_currentIconStateURL;
    NSURL *_desiredIconStateURL;
}

@property (copy, nonatomic, readonly) NSURL *currentIconStateURL;
@property (copy, nonatomic, readonly) NSURL *desiredIconStateURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (_Bool)deleteDesiredIconStateWithOptions:(unsigned long long)arg1 error:(id *)arg2;
- (id)loadDesiredIconState:(id *)arg1;
- (id)loadCurrentIconState:(id *)arg1;
- (_Bool)deleteCurrentIconStateWithOptions:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)saveDesiredIconState:(id)arg1 error:(id *)arg2;
- (_Bool)saveCurrentIconState:(id)arg1 error:(id *)arg2;
- (id)initWithIconStateURL:(id)arg1 desiredIconStateURL:(id)arg2;
- (_Bool)_save:(id)arg1 url:(id)arg2 error:(id *)arg3;
- (_Bool)_delete:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)_load:(id)arg1 error:(id *)arg2;

@end
