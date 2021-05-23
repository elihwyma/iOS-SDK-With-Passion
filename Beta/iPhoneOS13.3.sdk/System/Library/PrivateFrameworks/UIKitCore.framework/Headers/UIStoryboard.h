/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSBundle, NSDictionary, NSMutableDictionary, NSString, UIStoryboardSegueTemplate;

@interface UIStoryboard : NSObject

{
    NSBundle *bundle;
    NSString *storyboardFileName;
    NSDictionary *identifierToNibNameMap;
    NSDictionary *identifierToExternalStoryboardReferenceMap;
    NSString *designatedEntryPointIdentifier;
    NSString *designatedMenuIdentifier;
    NSMutableDictionary *identifierToUINibMap;
    UIStoryboardSegueTemplate *___currentStoryboardSegueTemplate;
    CDUnknownBlockType ___currentStoryboardSegueCreator;
    id ___currentSender;
}

@property (nonatomic, readonly) NSString *storyboardFileName;
@property (nonatomic, readonly) NSDictionary *identifierToNibNameMap;
@property (nonatomic, readonly) NSDictionary *identifierToExternalStoryboardReferenceMap;
@property (nonatomic, readonly) NSString *designatedEntryPointIdentifier;
@property (nonatomic, readonly) NSString *designatedMenuIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *identifierToUINibMap;
@property (nonatomic) UIStoryboardSegueTemplate *__currentStoryboardSegueTemplate;
@property (nonatomic) CDUnknownBlockType __currentStoryboardSegueCreator;
@property (nonatomic) id __currentSender;
@property (nonatomic, readonly) NSBundle *bundle;
@property (readonly) NSString *name;

+ (id)storyboardWithName:(id)arg1 bundle:(id)arg2;

- (void)dealloc;
- (_Bool)containsNibNamed:(id)arg1;
- (id)nibForStoryboardNibNamed:(id)arg1;
- (id)identifierForStringsFile;
- (id)instantiateInitialViewController;
- (id)_instantiateInitialMenu;
- (id)instantiateViewControllerWithIdentifier:(id)arg1;
- (id)_instantiateViewControllerReferencedByPlaceholderWithIdentifier:(id)arg1 storyboardSegueTemplate:(id)arg2 sender:(id)arg3;
- (id)initWithBundle:(id)arg1 storyboardFileName:(id)arg2 identifierToNibNameMap:(id)arg3 identifierToExternalStoryboardReferenceMap:(id)arg4 designatedEntryPointIdentifier:(id)arg5 designatedMenuIdentifier:(id)arg6;
- (id)referencedStoryboardForExternalReferenceInfo:(id)arg1;
- (id)_instantiateViewControllerWithIdentifier:(id)arg1 creator:(CDUnknownBlockType)arg2 storyboardSegueTemplate:(id)arg3 sender:(id)arg4;
- (id)_instantiateInitialViewControllerWithCreator:(CDUnknownBlockType)arg1 storyboardSegueTemplate:(id)arg2 sender:(id)arg3;
- (id)nibForViewControllerWithIdentifier:(id)arg1;
- (id)__reallyInstantiateViewControllerWithIdentifier:(id)arg1 creator:(CDUnknownBlockType)arg2 storyboardSegueTemplate:(id)arg3 sender:(id)arg4;
- (id)instantiateInitialViewControllerWithCreator:(CDUnknownBlockType)arg1;
- (id)instantiateViewControllerWithIdentifier:(id)arg1 creator:(CDUnknownBlockType)arg2;

@end
