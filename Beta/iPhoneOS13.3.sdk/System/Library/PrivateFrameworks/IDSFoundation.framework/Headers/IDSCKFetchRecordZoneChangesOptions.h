/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

#import <IDSFoundation/Swift-Protocol.h>

@class IDSCKServerChangeToken, NSArray;

@interface IDSCKFetchRecordZoneChangesOptions : NSObject <Swift>

{
    IDSCKServerChangeToken *_previousServerChangeToken;
    unsigned long long _resultsLimit;
    NSArray *_desiredKeys;
}

@property (copy, nonatomic) IDSCKServerChangeToken *previousServerChangeToken;
@property (nonatomic) unsigned long long resultsLimit;
@property (copy, nonatomic) NSArray *desiredKeys;

+ (id)alloc;
+ (Class)__class;

@end
