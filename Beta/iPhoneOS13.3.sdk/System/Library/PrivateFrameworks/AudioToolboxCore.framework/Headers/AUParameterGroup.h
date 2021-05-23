/*
 Image: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
 */

#import <AudioToolboxCore/AUParameterNode.h>

@class NSArray, NSMutableDictionary;

@interface AUParameterGroup : AUParameterNode

{
    NSArray *_children;
    NSMutableDictionary *_childIndicesByIdentifier;
}

@property (retain, nonatomic) NSMutableDictionary *childIndicesByIdentifier;
@property (nonatomic, readonly) NSArray *children;
@property (nonatomic, readonly) NSArray *allParameters;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)valueForKey:(id)arg1;
- (_Bool)isGroup;
- (void)_serialize:(struct CASerializer *)arg1;
- (id)copyNodeWithOffset:(unsigned long long)arg1;
- (void)_observersChanged:(_Bool)arg1 deltaCount:(int)arg2;
- (void)_deserialize:(struct CADeserializer *)arg1;
- (id)initWithChildren:(id)arg1;
- (id)initWithID:(id)arg1 name:(id)arg2 children:(id)arg3;
- (void)_indexChildren;
- (id)initWithTemplate:(id)arg1 identifier:(id)arg2 name:(id)arg3 addressOffset:(unsigned long long)arg4;

@end
