/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol REDonatedActionIdentifierProviding;

@interface _REPerformedActionKey : NSObject

{
    id <REDonatedActionIdentifierProviding> _identifier;
    NSString *_bundleIdentifier;
}

@property (nonatomic, readonly) id <REDonatedActionIdentifierProviding> identifier;
@property (nonatomic, readonly) NSString *bundleIdentifier;

+ (id)keyForBundleIdentifier:(id)arg1 identifier:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end
