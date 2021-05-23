/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NUAdContextDefinition;

@interface NUAdContextConstructor : NSObject

{
    NUAdContextDefinition *_rootDefinition;
    NUAdContextDefinition *_headerDefinition;
    NUAdContextDefinition *_bodyDefinition;
}

@property (nonatomic, readonly) NUAdContextDefinition *rootDefinition;
@property (nonatomic, readonly) NUAdContextDefinition *headerDefinition;
@property (nonatomic, readonly) NUAdContextDefinition *bodyDefinition;

- (id)initWithRootDefinition:(id)arg1 headerDefinition:(id)arg2 bodyDefinition:(id)arg3;
- (id)contextForContextProviders:(id)arg1 keyedContextProviders:(id)arg2;
- (id)valueForPropertyDefinition:(id)arg1 fromContextProviders:(id)arg2 keyedContextProviders:(id)arg3;
- (id)contextEntryForKey:(id)arg1 andValue:(id)arg2;
- (id)newsContextForContextProviders:(id)arg1 andKeyedContextProviders:(id)arg2;
- (void)dictionary:(id)arg1 addValue:(id)arg2 forKeyPath:(id)arg3;

@end
