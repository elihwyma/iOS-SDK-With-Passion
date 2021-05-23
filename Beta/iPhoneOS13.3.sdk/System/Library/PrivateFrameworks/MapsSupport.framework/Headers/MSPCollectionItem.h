/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <Foundation/NSObject.h>

#import <MapsSupport/Swift-Protocol.h>

@class NSString, NSUUID;

@interface MSPCollectionItem : NSObject <Swift>

{
    NSUUID *_storageIdentifier;
    NSString *_itemIdentifier;
}

@property (copy, nonatomic) NSString *itemIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)mutableObjectClass;
+ (id)mutableObjectProtocol;
+ (Class)immutableObjectClass;
+ (id)immutableObjectProtocol;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)storageIdentifier;
- (id)transferToImmutableIfValidWithError:(out id *)arg1;
- (id)copyIfValidWithError:(out id *)arg1;

@end
