/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

@interface AMSFamilyInfoLookupResult : NSObject

{
    _Bool _cached;
    NSArray *_familyMembers;
}

@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly, getter=isCached) _Bool cached;
@property (nonatomic, readonly) NSArray *familyMembers;

+ (id)_familyMembersFromDictionaryRepresentation:(id)arg1;

- (id)description;
- (id)initWithDictionaryRepresentation:(id)arg1 cached:(_Bool)arg2;

@end
