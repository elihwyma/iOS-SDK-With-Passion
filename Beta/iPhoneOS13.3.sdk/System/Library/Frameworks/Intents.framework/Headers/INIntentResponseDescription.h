/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class NSDictionary, NSString;

@interface INIntentResponseDescription : NSObject <Swift>

{
    _Bool _isPrivate;
    NSString *_name;
    Class _facadeClass;
    Class _dataClass;
    NSString *_type;
    NSDictionary *_slotsByName;
}

@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) Class facadeClass;
@property (nonatomic, readonly) Class dataClass;
@property (copy, nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) _Bool isPrivate;
@property (copy, nonatomic, readonly) NSDictionary *slotsByName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 facadeClass:(Class)arg2 dataClass:(Class)arg3 type:(id)arg4 isPrivate:(_Bool)arg5 slotsByName:(id)arg6;

@end
