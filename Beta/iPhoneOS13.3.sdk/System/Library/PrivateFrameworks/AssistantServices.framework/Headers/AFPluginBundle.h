/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface AFPluginBundle : NSObject

{
    Class _factoryClass;
    id _factoryInstance;
    NSMutableDictionary *_classIdentifiers;
}

@property (retain, nonatomic) Class factoryClass;
@property (retain, nonatomic) id factoryInstance;
@property (retain, nonatomic) NSMutableDictionary *classIdentifiers;

- (id)init;
- (void)registerClassIdentifier:(id)arg1 forDomain:(id)arg2 inGroup:(id)arg3;
- (_Bool)supportsClassIdentifier:(id)arg1 forDomainKey:(id)arg2 groupIdentifier:(id)arg3;

@end
