/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class RLMRealmConfiguration;

@interface WFRealmDatabaseConfiguration : NSObject

{
    RLMRealmConfiguration *_realmConfiguration;
}

@property (nonatomic, readonly) RLMRealmConfiguration *realmConfiguration;

+ (id)systemShortcutsConfiguration;
+ (id)inMemoryConfiguration;
+ (id)inMemoryConfigurationWithIdentifier:(id)arg1;

@end
