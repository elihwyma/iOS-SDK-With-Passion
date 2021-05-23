/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol REDonatedActionIdentifierProviding;

@interface _REActionKey : NSObject

{
    unsigned long long _hash;
    NSString *_identifier;
    id <REDonatedActionIdentifierProviding> _actionType;
    unsigned long long _relevanceProvidersHash;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) id <REDonatedActionIdentifierProviding> actionType;
@property (nonatomic, readonly) unsigned long long relevanceProvidersHash;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)arg1 actionType:(id)arg2 relevanceProvidersHash:(unsigned long long)arg3;

@end
