/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface IDSCTAdapterCache : NSObject

{
    unsigned long long _dualSIMEnabled;
    unsigned long long _isAnySIMUsable;
    unsigned long long _isAnySIMInserted;
    unsigned long long _supportsIdentification;
    NSArray *_contexts;
}

@property (nonatomic) unsigned long long dualSIMEnabled;
@property (nonatomic) unsigned long long isAnySIMUsable;
@property (nonatomic) unsigned long long isAnySIMInserted;
@property (nonatomic) unsigned long long supportsIdentification;
@property (retain, nonatomic) NSArray *contexts;

- (id)debugDescription;

@end
