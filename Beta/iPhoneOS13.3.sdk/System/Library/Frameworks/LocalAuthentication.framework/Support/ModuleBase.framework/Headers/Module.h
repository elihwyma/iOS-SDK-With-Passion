/*
 Image: /System/Library/Frameworks/LocalAuthentication.framework/Support/ModuleBase.framework/ModuleBase
 */

#import <Foundation/NSObject.h>

@class MechanismManager;

@interface Module : NSObject

{
    MechanismManager *_mechanismManager;
}

@property (nonatomic, readonly) MechanismManager *mechanismManager;

+ (id)missingSubclassErrorWithIdentifier:(id)arg1;

- (id)initWithMechanismManager:(id)arg1;
- (void)contextPluginWithExternalizedContext:(id)arg1 processId:(int)arg2 invalidationBlock:(CDUnknownBlockType)arg3 reply:(CDUnknownBlockType)arg4;

@end
