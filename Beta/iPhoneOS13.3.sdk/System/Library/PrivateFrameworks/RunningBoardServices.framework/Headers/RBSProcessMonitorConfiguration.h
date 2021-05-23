/*
 Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

#import <NSObject.h>

@class NSArray, NSHashTable, NSString, RBSProcessStateDescriptor;

@interface RBSProcessMonitorConfiguration : NSObject

{
    NSHashTable *_matchedHandles;
    NSString *_desc;
    int _clientPid;
    unsigned int _serviceClass;
    unsigned long long _identifier;
    NSArray *_predicates;
    RBSProcessStateDescriptor *_stateDescriptor;
    CDUnknownBlockType _updateHandler;
}

@property (nonatomic, readonly) unsigned long long identifier;
@property (nonatomic, readonly) int clientPid;
@property (copy, nonatomic) NSArray *predicates;
@property (copy, nonatomic) RBSProcessStateDescriptor *stateDescriptor;
@property (nonatomic) unsigned int serviceClass;
@property (copy, nonatomic) CDUnknownBlockType updateHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (unsigned long long)_nextIdentifier;
+ (_Bool)supportsBSXPCSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (_Bool)matchesProcess:(id)arg1;
- (id)_initWithIdentifier:(unsigned long long)arg1 andPid:(int)arg2;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)_validate;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)matchedProcesses;
- (id)fullDescription;

@end
