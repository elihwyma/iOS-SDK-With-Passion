/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class NSDictionary, NSString;

@interface INIntentDescription : NSObject <Swift>

{
    NSDictionary *_slotsByName;
    NSDictionary *_alternativeSlotNames;
    _Bool _isPrivate;
    NSString *_name;
    NSString *_responseName;
    Class _facadeClass;
    Class _dataClass;
    NSString *_type;
    SEL _handleSelector;
    SEL _confirmSelector;
}

@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *responseName;
@property (nonatomic, readonly) Class facadeClass;
@property (nonatomic, readonly) Class dataClass;
@property (copy, nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) _Bool isPrivate;
@property (nonatomic, readonly) SEL handleSelector;
@property (nonatomic, readonly) SEL confirmSelector;
@property (copy, nonatomic, readonly) NSDictionary *slotsByName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 responseName:(id)arg2 facadeClass:(Class)arg3 dataClass:(Class)arg4 type:(id)arg5 isPrivate:(_Bool)arg6 handleSelector:(SEL)arg7 confirmSelector:(SEL)arg8 slotsByName:(id)arg9;
- (id)slotByName:(id)arg1;
- (id)slotDescriptions;

@end
