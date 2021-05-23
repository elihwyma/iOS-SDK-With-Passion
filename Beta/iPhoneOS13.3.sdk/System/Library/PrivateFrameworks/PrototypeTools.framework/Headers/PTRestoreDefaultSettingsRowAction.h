/*
 Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

#import <PrototypeTools/PTRowAction.h>

@class NSString;

@interface PTRestoreDefaultSettingsRowAction : PTRowAction

{
    NSString *_settingsKeyPath;
}

@property (nonatomic, readonly) NSString *settingsKeyPath;

+ (id)action;
+ (id)actionWithSettingsKeyPath:(id)arg1;

- (CDUnknownBlockType)defaultHandler;

@end
